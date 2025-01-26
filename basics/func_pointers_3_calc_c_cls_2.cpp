#include <iostream>

class Calculator {
public:
    // Member functions for operations
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
    typedef int (Calculator::*Operation)(int, int);

    // Function to perform the operation
    int performOperation(Operation op, int a, int b) {
        return (this->*op)(a, b);
    }
};

int main() {
    Calculator calc;
    int x = 10, y = 5;

    // Array of member function pointers
    Calculator::Operation operations[] = {&Calculator::add, &Calculator::subtract, &Calculator::multiply, &Calculator::divide};

    // Perform operations
    std::cout << "Addition: " << calc.performOperation(operations[0], x, y) << std::endl;
    std::cout << "Subtraction: " << calc.performOperation(operations[1], x, y) << std::endl;
    std::cout << "Multiplication: " << calc.performOperation(operations[2], x, y) << std::endl;
    std::cout << "Division: " << calc.performOperation(operations[3], x, y) << std::endl;

    return 0;
}

