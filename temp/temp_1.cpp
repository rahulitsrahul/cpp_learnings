#include <iostream>
using namespace std;

void printMsg(int x)
{
    cout << "new Message: " << x << endl;
}

int main()
{
    void (*funcPtr)(int);
    funcPtr = printMsg;

    funcPtr(20);
}