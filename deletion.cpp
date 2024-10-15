#include <iostream>
using namespace std;

int main() {
    int n, pos;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];  // Assuming the max size of the array is 100

    // Input the elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the position from which to delete the element
    cout << "Enter the position of the element to be deleted (1 to " << n << "): ";
    cin >> pos;

    // Check for valid position
    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    // Shift elements to the left from the position
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    n--;

    // Output the updated array
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

