#include <iostream>

class MyClass {
private:
    int value;

public: 
    MyClass(int v) : value(v) {}

    // Function that returns a reference to the private member variable
    int& getValue() {
        return value;
    }

    // Function that returns a const reference to the private member variable
    const int& getValue() const {
        return value;
    }

    // Function to set the private member variable
    void setValue(int v) {
        value = v;
    }
};

int main() {
    MyClass obj(10);

    // Accessing the value using the reference
    int& ref = obj.getValue();
    std::cout << "Value: " << ref << std::endl;

    // Modify the value using the reference
    ref = 20;
    std::cout << "Modified Value: " << obj.getValue() << std::endl;

    // Set the value using the member function
    obj.setValue(30);
    std::cout << "Value after setValue: " << obj.getValue() << std::endl;

    return 0;
}
