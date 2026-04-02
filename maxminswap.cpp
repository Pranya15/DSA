 #include <iostream>
 #include <algorithm>
 using namespace std;

 void swapMaxMin(int arr[], int n) {
     if (n < 2) return;

     int minIdx = 0, maxIdx = 0;
     for (int i = 1; i < n; i++) {
         if (arr[i] < arr[minIdx]) minIdx = i;
         if (arr[i] > arr[maxIdx]) maxIdx = i;
     }

     swap(arr[minIdx], arr[maxIdx]);
 }

 int main() {
     int arr[] = {4, 5, 9, 8, 6, 1};
     int n = 6;

     swapMaxMin(arr, n);

     for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
     }
     cout << endl;
     return 0;
 }
