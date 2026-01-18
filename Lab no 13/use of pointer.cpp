#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare and initialize an integer variable
    int number = 10;

    // Step 2: Declare a pointer and store the address of the variable
    int* ptr = &number;

    // Step 3: Display the value of the variable using dereferencing operator
    cout << "Value of number using pointer: " << *ptr << endl;

    return 0;
}
