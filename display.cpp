#include <iostream>
using namespace std;

int main() {
    int size, top;

    cout << "Enter size of stack: ";
    cin >> size;

    int stack[size];

    cout << "Enter top value: ";
    cin >> top;

    // Taking elements
    for (int i = 0; i <= top; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> stack[i];
    }

    if (top == -1) {
        cout << "Stack is Empty";
    } else {
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
    }

    return 0;
}