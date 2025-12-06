#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "Enter the no. of elements: ";
    cin >> n;

    cout << "Enter the elements of array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output before deletion
    cout << "\nArray before deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Check if array is empty
    if (n == 0) {
        cout << "\nArray is empty, nothing to delete.";
        return 0;
    }

    // Delete element from beginning (shift left)
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // decrease size

    // Output after deletion
    cout << "\n\nArray after deletion from beginning:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}