#include <iostream>
#include <unordered_set>
using namespace std;

template <typename T>
void printUnique(const T arr[], int n) {
    unordered_set<T> seen;
    for (int i = 0; i < n; i++) {
        if (seen.insert(arr[i]).second) { // first time we see this value
            cout << arr[i] << " ";
        }
    }
}