<<<<<<< HEAD
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertAtEndCLL() {
    int newData;
    cout << "\nEnter the value: ";
    cin >> newData;

    Node* newNode = new Node();
    newNode->data = newData;

    // Case 1: Empty list
    if (head == NULL) {
        newNode->next = newNode; 
        head = newNode;
    }
    else {
        Node* temp = head;

        // Traverse to last node
        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }
}

void traverse(Node* head) {
    if (head == NULL) return;

    Node* temp = head;

    // Circular traversal
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main() {
    int n;
    cout << "How many nodes to insert at end? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        insertAtEndCLL();
    }

    cout << "\nCircular Linked List: ";
    traverse(head);

    return 0;
}
=======
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertAtEndCLL() {
    int newData;
    cout << "\nEnter the value: ";
    cin >> newData;

    Node* newNode = new Node();
    newNode->data = newData;

    // Case 1: Empty list
    if (head == NULL) {
        newNode->next = newNode; 
        head = newNode;
    }
    else {
        Node* temp = head;

        // Traverse to last node
        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }
}

void traverse(Node* head) {
    if (head == NULL) return;

    Node* temp = head;

    // Circular traversal
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main() {
    int n;
    cout << "How many nodes to insert at end? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        insertAtEndCLL();
    }

    cout << "\nCircular Linked List: ";
    traverse(head);

    return 0;
}
>>>>>>> 5ceaf5a0a82de92bd37db1187631c986f3e396df
