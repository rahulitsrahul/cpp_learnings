#include <iostream>

class Counter {
private:
    int count;

public:
    // Constructor to initialize count
    Counter(int initialCount) : count(initialCount) {}

    // Method to get the count by reference
    int& getCount() {
        return count;
    }

    // Method to get the count by const reference (read-only)
    const int& getCount() const {
        return count;
    }
};

int main() {
    // Create a Counter object with an initial count of 10
    Counter myCounter(10);

    // Print the initial count
    std::cout << "Initial count: " << myCounter.getCount() << std::endl;

    // Modify the count using the reference
    myCounter.getCount() = 20;

    // Print the modified count
    std::cout << "Modified count: " << myCounter.getCount() << std::endl;

    return 0;
}
