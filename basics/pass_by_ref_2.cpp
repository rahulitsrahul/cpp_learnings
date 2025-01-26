#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Constructor
    Rectangle(int w, int h) : width(w), height(h) {}

    // Function to calculate area
    int area() const {
        return width * height;
    }

    // Function to set dimensions
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }

    // Function to display dimensions
    void display() const {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

// Function to modify the dimensions of a rectangle
void modifyRectangle(Rectangle& rect, int newWidth, int newHeight) {
    rect.setDimensions(newWidth, newHeight);
}

int main() {
    // Create a Rectangle object
    Rectangle rect(10, 5);

    cout << "Before modification:" << endl;
    rect.display();

    // Pass the object by reference to modify its dimensions
    modifyRectangle(rect, 20, 10);

    cout << "After modification:" << endl;
    rect.display();

    return 0;
}
