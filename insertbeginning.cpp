#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    int i;

    cout << "Enter the no. of elements: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int element;
    cout << "Enter element to insert at beginning: ";
    cin >> element;

    // Shift elements to right
    for(i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert new element at index 0
    arr[0] = element;

    // Increase size
    n++;

    cout << "Array after insertion: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}