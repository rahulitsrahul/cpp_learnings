#include <iostream>

using namespace std;

class MyClass
{
    public:
        int value;
        MyClass(int v) : value(v) {}

        void display() const
        {
            cout << "Value: " << value << endl;
        }
};

// Function that returns a pointer
MyClass * CreateObject(int v)
{
    return new MyClass(v);
}

int main()
{
    MyClass * obj = CreateObject(10);
    obj->display();

    delete obj;

    return 0;
}