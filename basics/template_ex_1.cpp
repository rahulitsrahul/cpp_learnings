#include <iostream>

// Template definition
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    double p = 10.5, q = 20.5;

    // Using the template function with different types
    std::cout << "Max of x and y: " << getMax<int>(x, y) << std::endl;
    std::cout << "Max of p and q: " << getMax<double>(p, q) << std::endl;

    return 0;
}
