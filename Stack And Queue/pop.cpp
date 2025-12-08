#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int size, top = -1;   
    cout << "Enter size of stack: ";
    cin >> size;

    int stack[size];

    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    // POP OPERATION
    if (top == -1) {
        cout << "Stack Underflow";
    } 
    else {
        int popped = stack[top]; 
        top--;
        cout << "Element popped: " << popped;
    }

    return 0;
}
