#include <iostream>
using namespace std;

#define SIZE 5

int dq[SIZE] = {10, 20, 30};
int front = 0, rear = 2;

int main() {

    // Check underflow
    if (front == -1) {
        cout << "Deque Underflow";
        return 0;
    }

    cout << "Deleted element: " << dq[front] << endl;

    // Only one element
    if (front == rear) {
        front = rear = -1;
    }
    // Move front forward
    else if (front == SIZE - 1) {
        front = 0;
    }
    else {
        front = front + 1;
    }

    return 0;
}