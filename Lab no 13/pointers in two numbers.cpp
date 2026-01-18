#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swapNumbers(int* a, int* b) {
    int temp = *a;   // store value at address a
    *a = *b;         // put value of b into a
    *b = temp;       // put stored value into b
}

int main() {
    // Declare two integer variables
    int x = 10;
    int y = 20;

    // Display values before swapping
    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Call the swap function and pass addresses
    swapNumbers(&x, &y);

    // Display values after swapping
    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
