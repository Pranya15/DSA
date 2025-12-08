#include <iostream>
using namespace std;

int main() {
    int size, top = -1, x;
    cout << "Enter size of stack: ";
    cin >> size;

    int stack[size];

    cout << "Enter element to push: ";
    cin >> x;

    if (top == size - 1) {
        cout << "Stack Overflow";
    } else {
        top = top + 1;
        stack[top] = x;
        cout << "Element pushed: " << stack[top];
    }

    return 0;
}