//Static data members are shared among all instances of a class. They are not tied to any specific object but belong to the class itself.
#include <iostream>

class MyClass {
public:
    static int x; // Static data member
    int y;

    int sum() {
        return x + y;
    }
};

int MyClass::x = 5; // Definition and initialization of static data member

int main() {
    MyClass obj1, obj2;
    obj1.y = 3;
    obj2.y = 5;

    std::cout << "Sum for obj1: " << obj1.sum() << std::endl; // Output: 8
    std::cout << "Sum for obj2: " << obj2.sum() << std::endl; // Output: 10

    return 0;
}
