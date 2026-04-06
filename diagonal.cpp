#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int arr[n][n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int arr2[n][n];

    // Transpose logic
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr2[i][j] = arr[j][i];
        }
    }

    // Print transpose
    cout << "Transpose matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}