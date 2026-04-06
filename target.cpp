#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int arr[n][n];
    //int target = 3;
    //int flag = 0;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
  
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         if(target == arr[i][j]) {
    //             cout << "Found!" << endl;
    //             flag = 1;
    //             break; 
    //         }
    //     }
    //     if(flag) break;
    // }

    // if(!flag) {
    //     cout << "Not found!" << endl;
    // }

    //spiral

    // int left=0, right=n-1, top=0, bottom=n-1;
    // while(left<=right && top<=bottom){
    //     for(int i=left; i<=right;i++){
    //         cout<<arr[top][i];
    //     }
    //     top++; 
    //     for(int i=top; i<=bottom;i++){
    //         cout<<arr[i][right];
    //     }
    //     right--;
    //     for(int i=right; i>=left;i--){
    //         cout<<arr[bottom][i];
    //     }
    //     bottom--;
    //     for(int i=bottom; i>=top; i--){
    //         cout<<arr[i][left];
    //     }
    //     left++;
    // }


    return 0;
}