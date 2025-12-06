#include <iostream>
using namespace std;

int main() {
    int n, pos;

    // Input size
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    // Input array elements
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input position
    cout << "Enter position to delete (1-based index): ";
    cin >> pos;

    // Check validity
    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    // Shift elements left
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // decrease size

    // Output result
    cout << "Array after deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}