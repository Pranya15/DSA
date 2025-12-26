#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};

class queue {
public:
    node* front;
    node* rear;

    queue() {
        front = NULL;
        rear = NULL;
    }

    // Enqueue operation
    void enqueue(int value) {
        node* temp = new node(value);

        if (rear == NULL) {
            front = temp;
            rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    // Dequeue operation
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }

        node* temp = front;
        front = front->next;
        delete temp;

        if (front == NULL) {
            rear = NULL;
        }
    }

    // Display queue
    void display() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }

        node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}