#include <iostream>
using namespace std;

int countZeros(int n) {
    if (n == 0) return 0; 

    int digit = n % 10;

    if (digit == 0)
        return 1 + countZeros(n / 10);
    else
        return countZeros(n / 10);
}

int main() {
    int n;
    cout<<"Enter numbers:";
    cin >> n;

    cout << countZeros(n);
}

