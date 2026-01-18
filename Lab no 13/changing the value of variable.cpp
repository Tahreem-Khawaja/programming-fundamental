#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare an integer variable
    int number = 5;

    // Step 2: Declare a pointer and store the address of the variable
    int* ptr = &number;

    // Step 3: Change the value of the variable using the pointer
    *ptr = 20;

    // Step 4: Display the modified value
    cout << "Modified value of number: " << number << endl;

    return 0;
}
