#include <iostream>
using namespace std;

#define SIZE 5

int dq[SIZE];
int front = -1, rear = -1;

int main() {
    int value = 10;

    // Check overflow
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
        cout << "Deque Overflow";
        return 0;
    }

    // If deque is empty
    if (front == -1) {
        front = rear = 0;
    }
    // Move front backward
    else if (front == 0) {
        front = SIZE - 1;
    }
    else {
        front = front - 1;
    }

    dq[front] = value;

    cout << "Inserted at front: " << dq[front];
    return 0;
}