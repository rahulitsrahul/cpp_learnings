// Producer creates integers based on user inputs and consumer reads it. If user inputs "Q" the session terminates gracefully

#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include <chrono>
#include <string>

class Producer {
public:
    Producer(std::queue<int>& q, std::mutex& m, bool& d)
        : myQueue(q), mtx(m), done(d) {}

    void produce(int n) {
        for (int i = 0; i < n; ++i) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
            std::lock_guard<std::mutex> lock(mtx);
            myQueue.push(i);
            std::cout << "Produced: " << i << std::endl;
        }
    }

    void stop() {
        std::lock_guard<std::mutex> lock(mtx);
        done = true;
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
            std::lock_guard<std::mutex> lock(mtx);
            while (!myQueue.empty()) {
                int value = myQueue.front();
                myQueue.pop();
                std::cout << "Consumed: " << value << std::endl;
            }
            if (done && myQueue.empty()) {
                break;
            }
        }
    }

private:
    std::queue<int>& myQueue;
    std::mutex& mtx;
    bool& done;
};

class ProducerConsumerManager {
public:
    ProducerConsumerManager()
        : producer(myQueue, mtx, done), consumer(myQueue, mtx, done), done(false) {}

    void start() {
        producerThread = std::thread(&ProducerConsumerManager::runProducer, this);
        consumerThread = std::thread(&Consumer::consume, &consumer);
    }

    void join() {
        producerThread.join();
        consumerThread.join();
    }

private:
    std::queue<int> myQueue;
    std::mutex mtx;
    bool done;
    Producer producer;
    Consumer consumer;
    std::thread producerThread;
    std::thread consumerThread;

    void runProducer() {
        std::string input;
        while (true) {
            std::cout << "Enter number of items to produce or 'Q' to quit: ";
            std::cin >> input;
            if (input == "Q") {
                producer.stop();
                break;
            } else {
                int n = std::stoi(input);
                producer.produce(n);
            }
        }
    }
};

int main() {
    ProducerConsumerManager manager;
    manager.start();
    manager.join();
    return 0;
}
