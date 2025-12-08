#include <iostream>
using namespace std;

int main() {
    int top, size;

    cout << "Enter stack size: ";
    cin >> size;

    cout << "Enter top value: ";
    cin >> top;

    if (top == -1) { 
        cout << "Stack is Empty";
    } else {
        cout << "Stack is Not Empty";
    }

    return 0;
}
