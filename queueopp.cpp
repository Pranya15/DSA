#include <iostream>
using namespace std;

// Enqueue function
void enqueue(int queue[], int &front, int &rear, int size) {
    if (rear == size - 1) {
        cout << "Queue is Full" << endl;
        return;
    }

    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = value;
    cout << value << " Got Inserted Successfully." << endl;
}

// Dequeue function
void dequeue(int queue[], int &front, int &rear) {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << queue[front] << " Got Deleted Successfully." << endl;
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

// Peek function
void peek(int queue[], int front) {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Front Element is: " << queue[front] << endl;
    }
}

// Display function
void display(int queue[], int front, int rear) {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Queue Elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter the Size of Queue : ";
    int size;
    cin >> size;

    int queue[size];
    int front = -1;
    int rear = -1;

    int choice;
    cout << "Enter any number to continue and 0 to terminate: ";
    cin >> choice;

    while (choice != 0) {
        cout << "\nPress 1 to Enqueue";
        cout << "\nPress 2 to Dequeue";
        cout << "\nPress 3 to Peek";
        cout << "\nPress 4 to Display\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enqueue(queue, front, rear, size);
                break;

            case 2:
                dequeue(queue, front, rear);
                break;

            case 3:
                peek(queue, front);
                break;

            case 4:
                display(queue, front, rear);
                break;

            default:
                cout << "Enter a valid choice!!" << endl;
        }

        cout << "\nEnter any number to continue and 0 to terminate: ";
        cin >> choice;
    }

    return 0;
}