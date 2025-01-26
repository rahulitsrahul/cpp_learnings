#include <iostream>
using namespace std;

class Point
{
    private:
        int x, y;

    public:
        // Constructor to initialize the point
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

        // Overloading the + operator to add two Point objects
        Point operator + (const Point& other) const
        {
            return Point(this->x + other.x, this->y + other.y);
        }

        // Overloading the () operator to update the point's coordinates
        void operator () (int _x, int _y)
        {
            x = _x;
            y = _y;
        }

        // Function to display the point
        void display() const
        {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

int main()
{
    Point p1(3, 4);
    Point p2(7, 1);

    // Using the overloaded + operator to add p1 and p2
    Point p3 = p1 + p2;

    // Display the result
    cout << "p1: "; p1.display();
    cout << "p2: "; p2.display();
    cout << "p1 + p2 = p3: "; p3.display();

    // Using the overloaded () operator to update p3's coordinates
    p3(10, 10); // This sets p3's x to 10 and y to 10

    // Display the updated p3
    cout << "Updated p3: "; p3.display();

    return 0;
}
