#include <iostream>
using namespace std;

#define SIZE 5

int dq[SIZE];
int front = -1, rear = -1;

int main() {
    int value = 20;

    // Check overflow
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
        cout << "Deque Overflow";
        return 0;
    }

    // If deque is empty
    if (rear == -1) {
        front = rear = 0;
    }
    // Move rear forward
    else if (rear == SIZE - 1) {
        rear = 0;
    }
    else {
        rear = rear + 1;
    }

    dq[rear] = value;

    cout << "Inserted at rear: " << dq[rear];
    return 0;
}