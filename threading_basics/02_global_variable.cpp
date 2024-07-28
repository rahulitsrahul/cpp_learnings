#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

std::atomic<int> i = 0;

void foo()
{
    ++i;
    cout << i;
}

int main()
{
    cout << "Main thread Begin" << endl;
    std::thread t1(foo);
    std::thread t2(foo);
    std::thread t3(foo);

    t1.join();
    t2.join();
    t3.join();

    cout << "\n Exiting Main thread" << endl;
    return 0;
}