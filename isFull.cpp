#include <iostream>
using namespace std;

int main() {
    int top, size;

    cout << "Enter stack size: ";
    cin >> size;

    cout << "Enter top value: ";
    cin >> top;

    if (top == size - 1) {
        cout << "Stack is Full";
    } else {
        cout << "Stack is Not Full";
    }

    return 0;
}
