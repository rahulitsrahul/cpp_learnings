#include <iostream>
using namespace std;

int add (int x, int y)
{
    return x + y;
}

int main()
{
    // Declare a function pointer with integer (int, int)
    int (*funcPtr)(int, int);

    // Assign the address of add to funcPtr
    funcPtr = add;

    int result = funcPtr(5, 8);

    cout << "Result of funcPtr: " << result << endl;

    return 0;
}