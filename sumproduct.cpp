#include <iostream>
using namespace std;
void sumProduct(int sz,int arr[]){
    int sum = 0;
    int product = 1;
    for(int i=0; i<sz; i++){
        sum += arr[i];
        product *= arr[i];

    }
    cout <<"Sum= "<< sum << endl;
    cout <<"Product= " << product << endl;
}

int main(){
    int arr[]= {2,4,6,8,2,1};
    int sz = 6;
    sumProduct(sz,arr);
    return 0;
}