#include <iostream>
#include <set>
using namespace std;

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    set<int> s1;
    set<int> printed;  

   
    for (int i = 0; i < size1; i++) {
        s1.insert(arr1[i]);
    }

    
    for (int i = 0; i < size2; i++) {
        if (s1.find(arr2[i]) != s1.end() && printed.find(arr2[i]) == printed.end()) {
            cout << arr2[i] << " ";
            printed.insert(arr2[i]);
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 5};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection: ";
    printIntersection(arr1, size1, arr2, size2);

    return 0;
}