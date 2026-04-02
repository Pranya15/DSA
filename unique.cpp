#include <iostream>
#include <unordered_set>
using namespace std;

template <typename T>
void printUnique(const T arr[], int n) {
    unordered_set<T> seen;
    for (int i = 0; i < n; i++) {
        if (seen.insert(arr[i]).second) { 
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, n);

    return 0;
}