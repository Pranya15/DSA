#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Merge Function
    void merge(vector<int>& arr, int low, int mid, int high)
    {
        vector<int> temp;

        int left = low;
        int right = mid + 1;

        // Compare elements from both halves
        while(left <= mid && right <= high)
        {
            if(arr[left] <= arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }

        // Remaining elements from left half
        while(left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }

        // Remaining elements from right half
        while(right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }

        // Copy sorted elements back to original array
        for(int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }

    // Merge Sort Function
    void mergeSort(vector<int>& arr, int low, int high)
    {
        // Base Case
        if(low >= high)
            return;

        int mid = (low + high) / 2;

        // Sort left half
        mergeSort(arr, low, mid);

        // Sort right half
        mergeSort(arr, mid + 1, high);

        // Merge both sorted halves
        merge(arr, low, mid, high);
    }
};

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    Solution obj;

    int n = arr.size();

    obj.mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}