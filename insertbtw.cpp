#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int element, position;
    cout << "Enter element to insert: ";
    cin >> element;

    cout << "Enter position where element has to be inserted: ";
    cin >> position;

    // Convert to index (pos-1)
    int index = position - 1;

    // Check validity
    if (index < 0 || index > n) {
        cout << "Invalid position!";
        return 0;
    }

    // Shift elements to right
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert element
    arr[index] = element;
    n = n + 1;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}