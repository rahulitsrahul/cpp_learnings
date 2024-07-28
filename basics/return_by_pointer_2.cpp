#include <iostream>

class AnotherClass {
public:
    int data;
    AnotherClass(int d) : data(d) {}
    void show() const {
        std::cout << "Data: " << data << std::endl;
    }
};

class MyContainer {
public:
    AnotherClass* getAnotherClassObject(int value) {
        return new AnotherClass(value);  // Allocate and return a new AnotherClass object
    }
};

int main() {
    MyContainer container;
    AnotherClass* obj = container.getAnotherClassObject(20);  // Obtain pointer to AnotherClass object

    obj->show();  // Use the object through the pointer

    delete obj;  // Free the allocated memory

    return 0;
}
