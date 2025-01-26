#include <iostream>
#include <cmath>

class Point {
private:
    int x, y;
    static int pointCount; // Static member to keep track of the number of Point objects

public:
    // Constructor
    Point(int x = 0, int y = 0) : x(x), y(y) {
        pointCount++;
    }

    // Copy constructor
    Point(const Point& other) : x(other.x), y(other.y) {
        pointCount++;
    }

    // Move constructor
    Point(Point&& other) noexcept : x(other.x), y(other.y) {
        other.x = 0;
        other.y = 0;
        pointCount++;
    }

    // Destructor
    ~Point() {
        pointCount--;
    }

    // Function to set the coordinates
    void setCoordinates(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Function to get the x coordinate by reference
    int& getX() {
        return x;
    }

    // Function to get the y coordinate by reference
    int& getY() {
        return y;
    }

    // Overload the + operator to add two Point objects
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    // Overload the << operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Point& point) {
        os << "Point(" << point.x << ", " << point.y << ")";
        return os;
    }

    // Function to calculate the distance between two points
    double distanceTo(const Point& other) const {
        return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    }

    // Static function to get the number of Point objects
    static int getPointCount() {
        return pointCount;
    }
};

// Initialize the static member
int Point::pointCount = 0;

int main() {
    Point p1(10, 20);
    Point p2(30, 40);

    // Using auto to deduce the type
    auto& xRef = p1.getX();
    auto& yRef = p1.getY();

    // Modifying the coordinates using references
    xRef = 50;
    yRef = 60;

    // Using a pointer to a Point object
    Point* p3 = new Point(70, 80);
    std::cout << *p3 << std::endl;

    // Modifying the coordinates using pointers
    p3->setCoordinates(90, 100);
    std::cout << *p3 << std::endl;

    // Printing the modified coordinates of p1
    std::cout << p1 << std::endl;

    // Using the overloaded + operator
    Point p4 = p1 + p2;
    std::cout << "p1 + p2 = " << p4 << std::endl;

    // Calculating the distance between two points
    std::cout << "Distance between p1 and p2: " << p1.distanceTo(p2) << std::endl;

    // Printing the number of Point objects
    std::cout << "Number of Point objects: " << Point::getPointCount() << std::endl;

    // Cleaning up the dynamically allocated memory
    delete p3;

    // Printing the number of Point objects after deletion
    std::cout << "Number of Point objects after deletion: " << Point::getPointCount() << std::endl;

    return 0;
}
