#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Partition Function
    int partition(vector<int>& arr, int low, int high)
    {
        // Take first element as pivot
        int pivot = arr[low];

        int i = low;
        int j = high;

        while(i < j)
        {
            // Find element greater than pivot
            while(arr[i] <= pivot && i <= high - 1)
            {
                i++;
            }

            // Find element smaller than pivot
            while(arr[j] > pivot && j >= low + 1)
            {
                j--;
            }

            // Swap if needed
            if(i < j)
            {
                swap(arr[i], arr[j]);
            }
        }

        // Place pivot at correct position
        swap(arr[low], arr[j]);

        return j;
    }

    // Quick Sort Function
    void quickSort(vector<int>& arr, int low, int high)
    {
        // Base Case
        if(low < high)
        {
            // Partition Index
            int pIndex = partition(arr, low, high);

            // Sort left part
            quickSort(arr, low, pIndex - 1);

            // Sort right part
            quickSort(arr, pIndex + 1, high);
        }
    }
};

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};

    Solution obj;

    int n = arr.size();

    obj.quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}