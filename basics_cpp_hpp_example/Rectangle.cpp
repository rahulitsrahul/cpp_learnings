#include "Rectangle.hpp"

// Default constructor
Rectangle::Rectangle() : width(0), height(0) {}

// Parameterized constructor
Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

// Destructor
Rectangle::~Rectangle() {}

// Getter methods
double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

// Setter methods
void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setHeight(double h) {
    height = h;
}

// Other methods
double Rectangle::area() const {
    return width * height;
}

double Rectangle::perimeter() const {
    return 2 * (width + height);
}
