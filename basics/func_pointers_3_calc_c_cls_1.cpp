#include <iostream>

class Calculator {
public:
    // A member function
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    // Create an instance of Calculator
    Calculator calc;

    // Declare a member function pointer with the signature int(Calculator::*)(int, int)
    int (Calculator::*funcPtr)(int, int);

    // Assign the address of multiply to funcPtr
    funcPtr = &Calculator::multiply;

    // Call the member function using the pointer
    int result = (calc.*funcPtr)(3, 4); // Output: 12
    std::cout << "Result: " << result << std::endl;

    return 0;
}
