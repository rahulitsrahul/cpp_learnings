#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include <chrono>

std::queue<int> myQueue;
std::mutex mtx;
bool done = false;

void producer() {
    for (int i = 0; i < 10; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
        mtx.lock();
        myQueue.push(i);
        std::cout << "Produced: " << i << std::endl;
        mtx.unlock();
    }
    mtx.lock();
    done = true;
    mtx.unlock();
}

void consumer() {
    while (true) {
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Polling interval
        mtx.lock();
        while (!myQueue.empty()) {
            int value = myQueue.front();
            myQueue.pop();
            std::cout << "Consumed: " << value << std::endl;
        }
        if (done && myQueue.empty()) {
            mtx.unlock();
            break;
        }
        mtx.unlock();
    }
}

int main() {
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();

    return 0;
}


