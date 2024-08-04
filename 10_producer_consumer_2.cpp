#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include <chrono>

class Producer {
public:
    Producer(std::queue<int>& q, std::mutex& m, bool& d)
        : myQueue(q), mtx(m), done(d) {}

    void produce() {
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

private:
    std::queue<int>& myQueue;
    std::mutex& mtx;
    bool& done;
};

class Consumer {
public:
    Consumer(std::queue<int>& q, std::mutex& m, bool& d)
        : myQueue(q), mtx(m), done(d) {}

    void consume() {
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

private:
    std::queue<int>& myQueue;
    std::mutex& mtx;
    bool& done;
};

int main() {
    std::queue<int> myQueue;
    std::mutex mtx;
    bool done = false;

    Producer producer(myQueue, mtx, done);
    Consumer consumer(myQueue, mtx, done);

    std::thread producerThread(&Producer::produce, &producer);
    std::thread consumerThread(&Consumer::consume, &consumer);

    producerThread.join();
    consumerThread.join();

    return 0;
}
