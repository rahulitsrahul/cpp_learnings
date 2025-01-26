#include <iostream>

// Define a struct for a 2D point
struct Point {
    int x;
    int y;
};

// Use typedef to create an alias for the struct
typedef struct Point Point2D;

int main() {
    // Declare a variable of type Point2D
    Point2D p1;
    p1.x = 10;
    p1.y = 20;

    std::cout << "Point coordinates: (" << p1.x << ", " << p1.y << ")" << std::endl;

    return 0;
} 
