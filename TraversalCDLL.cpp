#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;

// Traversal of Circular Doubly Linked List
void traverseCDLL() {

    // Case 1: List empty
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node *temp = head;

    // Forward traversal
    cout << "Forward Traversal: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;

    // Backward traversal
    cout << "Backward Traversal: ";
    temp = head->prev;  // last node
    do {
        cout << temp->data << " ";
        temp = temp->prev;
    } while (temp != head->prev);
    
    cout << endl;
}

int main() {

    // Creating a small CDLL manually for demo
    Node *n1 = new Node{10, NULL, NULL};
    Node *n2 = new Node{20, NULL, NULL};
    Node *n3 = new Node{30, NULL, NULL};

    // linking circularly
    head = n1;

    n1->next = n2;
    n2->next = n3;
    n3->next = n1;

    n1->prev = n3;
    n2->prev = n1;
    n3->prev = n2;

    // Call traversal
    traverseCDLL();

    return 0;
}
