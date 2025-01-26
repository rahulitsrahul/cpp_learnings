// Execution command: g++ -o main main.cpp Rectangle.cpp

#include <iostream>
#include "Rectangle.hpp"

int main() {
    // Create a Rectangle object using the default constructor
    Rectangle rect1;
    std::cout << "Default Rectangle area: " << rect1.area() << "\n";
    std::cout << "Default Rectangle perimeter: " << rect1.perimeter() << "\n";

    // Create a Rectangle object using the parameterized constructor
    Rectangle rect2(3.0, 4.0);
    std::cout << "Rectangle with width 3 and height 4 area: " << rect2.area() << "\n";
    std::cout << "Rectangle with width 3 and height 4 perimeter: " << rect2.perimeter() << "\n";

    // Set new dimensions
    rect2.setWidth(5.0);
    rect2.setHeight(6.0);
    std::cout << "Rectangle with new dimensions area: " << rect2.area() << "\n";
    std::cout << "Rectangle with new dimensions perimeter: " << rect2.perimeter() << "\n";

    return 0;
}
