#include <iostream>

using namespace std;

void printMessage()
{
    std::cout << "Hello, func pointers" << endl;
}

int main()
{
    // Declare a function pointer
    void (*funcPtr)();

    // Assign the address of printMessage to funcPtr
    funcPtr = printMessage;

    // Call function using the pointer
    funcPtr();


    return 0;
}