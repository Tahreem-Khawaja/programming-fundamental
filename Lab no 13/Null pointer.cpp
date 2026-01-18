#include <iostream>
using namespace std;

int main() {
    // Pointer initialized to NULL (safe for older C++ versions)
    int* ptr = NULL;

    // Check if pointer is null
    if (ptr == NULL) {
        cout << "The pointer is null and does not point to any valid memory." << endl;
    } else {
        cout << "The pointer is not null. It points to memory address: " << ptr << endl;
    }

    return 0;
}
