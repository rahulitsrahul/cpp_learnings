#include <iostream>

using namespace std;

class MyClass
{
    public:
        int value_1, value_2;
        MyClass(int v1, int v2) : value_1(v1), value_2(v2)  {}

        void display() const
        {
            cout << "Values, v1: " << value_1 << ", v2: " << value_2 << endl;
        }
};

// Function that returns a pointer
MyClass * CreateObject(int v1, int v2)
{
    return new MyClass(v1, v2);
}

int main()
{
    // Create Object by function
    MyClass * obj = CreateObject(10, 11);
    obj->display();

    // Create Object directly
    MyClass * obj_1 = new MyClass(32, 64);
    obj_1->display();

    delete obj;

    return 0;
}