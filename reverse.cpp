#include <iostream>
using namespace std;

int reverse(int n, int rev) {
    if (n == 0) return rev;   

    return reverse(n / 10, rev * 10 + (n % 10));
}

int reverseNumber(int n) {
    return reverse(n, 0);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Reversed = " << reverseNumber(n);

    return 0;
}