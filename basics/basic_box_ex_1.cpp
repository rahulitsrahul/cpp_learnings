#include <iostream>
#include <cstring>

class Box {
private:
    int* dimensions; // Dynamic array to store length, width, height

public:
    // Constructor
    Box(int l, int w, int h) {
        dimensions = new int[3];
        dimensions[0] = l;
        dimensions[1] = w;
        dimensions[2] = h;
    }

    // Copy Constructor
    Box(const Box& other) {
        dimensions = new int[3];
        std::memcpy(dimensions, other.dimensions, 3 * sizeof(int));
    }

    // Assignment Operator
    Box& operator=(const Box& other) {
        if (this != &other) {
            delete[] dimensions;
            dimensions = new int[3];
            std::memcpy(dimensions, other.dimensions, 3 * sizeof(int));
        }
        return *this;
    }

    // Destructor
    ~Box() {
        delete[] dimensions;
    }

    // Method to set dimensions
    void setDimensions(int l, int w, int h) {
        dimensions[0] = l;
        dimensions[1] = w;
        dimensions[2] = h;
    }

    // Method to get length by reference
    int& getLength() {
        return dimensions[0];
    }

    // Method to get width by reference
    int& getWidth() {
        return dimensions[1];
    }

    // Method to get height by reference
    int& getHeight() {
        return dimensions[2];
    }

    // Overload the + operator to add dimensions of two boxes
    Box operator+(const Box& other) const {
        return Box(dimensions[0] + other.dimensions[0],
                   dimensions[1] + other.dimensions[1],
                   dimensions[2] + other.dimensions[2]);
    }

    // Method to display dimensions
    void displayDimensions() const {
        std::cout << "Length: " << dimensions[0]
                  << ", Width: " << dimensions[1]
                  << ", Height: " << dimensions[2] << std::endl;
    }
};

int main() {
    Box box1(10, 20, 30);
    Box box2(5, 15, 25);

    // Display initial dimensions
    box1.displayDimensions();
    box2.displayDimensions();

    // Modify dimensions using return by reference
    box1.getLength() = 15;
    box1.getWidth() = 25;
    box1.getHeight() = 35;

    // Display modified dimensions
    box1.displayDimensions();

    // Use copy constructor
    Box box3 = box1;
    box3.displayDimensions();

    // Use assignment operator
    box2 = box1;
    box2.displayDimensions();

    // Add dimensions of two boxes
    Box box4 = box1 + box2;
    box4.displayDimensions();

    return 0;
}
