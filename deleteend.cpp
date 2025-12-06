#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    // Check if empty
    if (n == 0) {
        cout << "Array is empty. Nothing to delete.";
        return 0;
    }

    // Input array elements
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Deleting last element...\n";

    n--; // simply reduce size by 1

    // Output result
    cout << "Array after deleting last element:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}