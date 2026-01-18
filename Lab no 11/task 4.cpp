#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    // Calculate length
    int length = sizeof(arr) / sizeof(arr[0]);
    cout<<"Length of the array is "<<length;
    return 0;
}
