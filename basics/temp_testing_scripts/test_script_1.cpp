#include <iostream>
using namespace std;

void print_msg(int a)
{
    cout << "I am printing this message: " << a << endl;
}

int main()
{
    cout << "running a test script" << endl;

    void (*funcptr)(int);
    funcptr = print_msg;
    funcptr(5);

    return 0;
}