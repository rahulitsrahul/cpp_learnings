#include <iostream>

// Function declarations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

// Function pointer type  
typedef int (*Operation)(int, int);

// Function to perform the operation
int performOperation(Operation op, int a, int b) {
    return op(a, b);
}

int main() {
    int x = 10, y = 5;

    // Array of function pointers
    Operation operations[] = {add, subtract, multiply, divide};

    // Perform operations
    std::cout << "Addition: " << performOperation(operations[0], x, y) << std::endl;
    std::cout << "Subtraction: " << performOperation(operations[1], x, y) << std::endl;
    std::cout << "Multiplication: " << performOperation(operations[2], x, y) << std::endl;
    std::cout << "Division: " << performOperation(operations[3], x, y) << std::endl;


    std::cout << "test operations: " << std::endl;
    std:: cout << performOperation(add, 5, 3) << std::endl;

    return 0;
}
