#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the number of elements: ";
    cin >> N;

    int arr[N];

    cout << "Enter " << N << " integers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Array in reverse order:" << endl;
    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
