#include <iostream>
using namespace std;

    int linearSearch(int arr[], int sz, int target){
        for(int i=0; i<sz; i++){
            if(arr[i]== target)
            {
                return i;
            }
        }
        return -1;
    }
int main (){
    int arr[] = {4,5,9,8,6,1};
    int sz = 6;
    int target = 6;
    cout << linearSearch(arr,sz,target) << endl;
    return 0;
}
