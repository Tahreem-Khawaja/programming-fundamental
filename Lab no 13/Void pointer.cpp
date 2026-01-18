#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare an integer variable
    int number = 50;

    // Step 2: Declare a void pointer and assign it the address of the integer
    void* ptr = &number;

    // Step 3: Cast the void pointer to int* before dereferencing
    cout << "Value of number using void pointer: " << *(static_cast<int*>(ptr)) << endl;

    return 0;
}
