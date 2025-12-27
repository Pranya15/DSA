#include <iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
};

Node* head = NULL;

int main() {

    // Pre-filled queue
    Node* n1 = new Node{10, 5, NULL};
    Node* n2 = new Node{20, 3, NULL};
    head = n1;
    n1->next = n2;

    // Check underflow
    if (head == NULL) {
        cout << "Priority Queue Underflow";
        return 0;
    }

    Node* temp = head;
    cout << "Deleted element: " << temp->data;

    head = head->next;
    delete temp;

    return 0;
}