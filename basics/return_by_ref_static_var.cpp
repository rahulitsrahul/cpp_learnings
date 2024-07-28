#include <iostream>

class Counter {
private:
    static int count;

public:
    static int& getCount() {
        return count;
    }

    static void increment() {
        ++count;
    }
};

// Initialize static member variable
int Counter::count = 0;

int main() {
    // Increment count via static member function
    Counter::increment();
    Counter::increment();

    // Get reference to count
    int& ref = Counter::getCount();
    std::cout << "Count: " << ref << std::endl;

    // Modify the count using the reference
    ref = 10;
    std::cout << "Modified Count: " << Counter::getCount() << std::endl;

    return 0;
}
