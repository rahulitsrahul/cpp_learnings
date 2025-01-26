#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
private:
    double width;
    double height;

public:
    // Constructors
    Rectangle();
    Rectangle(double w, double h);

    // Destructor
    ~Rectangle();

    // Getter methods
    double getWidth() const;
    double getHeight() const;

    // Setter methods
    void setWidth(double w);
    void setHeight(double h);

    // Other methods
    double area() const;
    double perimeter() const;
};

#endif // RECTANGLE_HPP
