#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void foo()
{
    cout << "Hello from foo \n" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
     cout << "foo threaded End \n" << endl;
}

class callable_class
{
public:
    void class_call()
    {
        cout << "Hello from Callable_Class, thread_id: " << std::this_thread::get_id() << endl;
    }

    void class_call_with_var(int x, int y)
    {
        cout << "callable class received: " << x << ", " << y << endl;
    }
};

int main()
{
    callable_class obj_1;

    std::thread thread_1(foo); // Thread for global function foo
    std::thread thread_2(&callable_class::class_call, &obj_1); // Thread for callable_class::class_call
    std::thread thread_3(&callable_class::class_call_with_var, &obj_1, 10, 20); // Thread for callable_class::class_call_with_var

    // Join each thread exactly once
    thread_1.detach();
    thread_2.join();
    thread_3.join();

    std::cout << "Hello from main" << endl;

    return 0;
}
