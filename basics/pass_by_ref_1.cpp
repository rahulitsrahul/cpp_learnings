#include <iostream>
using namespace std;

// Function to swap two numbers using pass by reference
void swap(int& n1, int& n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    int a = 1, b = 2;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Call the swap function
    swap(a, b);

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
