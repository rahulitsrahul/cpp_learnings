// A static variable inside a function retains its value between function calls. It is initialized only once and persists for the lifetime of the program.

#include <iostream>

void counter() {
    static int count = 0; // Static variable
    count++;
    std::cout << "Count: " << count << std::endl;
}

int main() {
    counter(); // Output: Count: 1
    counter(); // Output: Count: 2
    counter(); // Output: Count: 3
    return 0;
}
