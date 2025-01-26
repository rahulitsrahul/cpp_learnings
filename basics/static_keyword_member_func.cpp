// Static member functions can be called without creating an instance of the class. They can only access static data members or other static member functions.
#include <iostream>

class MyClass {
public:
    static void display() {
        std::cout << "Static member function called." << std::endl;
    }
};

int main() {
    MyClass::display(); // Calling static member function without an object
    return 0;
}
