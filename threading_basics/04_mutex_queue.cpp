#include <iostream>
#include <mutex>
#include <list>
#include <thread>
#include <chrono>
#include <queue>
using namespace std;


std::mutex m;
queue<int> my_queue;
 // Queue operations (FIFO): push, pop, front, empty, size


void add_to_list(int const & x)
{
    m.lock();
    my_queue.push(x);
    m.unlock();
}

void get_size()
{
    m.lock();
    int size = my_queue.size();
    m.unlock();
    std::cout << "size of list is : " << size << std::endl;
}

int main()
{
    std::thread t1(add_to_list, 4);
    std::thread t2(add_to_list, 11);
    
    t1.join();
    t2.join();

    std::chrono::milliseconds(3000);
    std::thread t3(get_size);
    t3.join();


    cout << "Main thread empty queue" << endl;
    while (!my_queue.empty())
    {
        m.lock();
        std::cout << my_queue.front() << endl;
        my_queue.pop();
        m.unlock();
    }
        

    return 0;
}