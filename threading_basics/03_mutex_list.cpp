#include <iostream>
#include <mutex>
#include <list>
#include <thread>
#include <chrono>

std::mutex m;
std::list<int> my_list;


void add_to_list(int const & x)
{
    m.lock();
    my_list.push_front(x);
    m.unlock();
}

void size()
{
    m.lock();
    int size = my_list.size();
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
    std::thread t3(size);
    t3.join();

    return 0;
}