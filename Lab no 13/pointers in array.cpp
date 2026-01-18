#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare and initialize an array of integers
    int arr[5] = {10, 20, 30, 40, 50};

    // Step 2: Declare a pointer and point it to the first element of the array
    int* ptr = arr;

    // Step 3: Use pointer arithmetic to access and display array elements
    cout << "Array elements using pointer arithmetic:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << endl;
    }

    return 0;
}
