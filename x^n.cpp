#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n == 0) return 1;  

    int half = power(x, n / 2);

    if (n % 2 == 0)
        return half * half;        
    else
        return x * half * half;   
}

int main() {
    int x, n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter power (n): ";
    cin >> n;

    cout << "Result = " << power(x, n);

    return 0;
}