<<<<<<< HEAD
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertAtPositionCLL(int position) {

    int newData;
    cout << "\nEnter the value: ";
    cin >> newData;

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    // Case 1: Empty list + position 1 only
    if (head == NULL) {
        if (position != 1) {
            cout << "Invalid position! List is empty.\n";
            return;
        }
        newNode->next = newNode;
        head = newNode;
        return;
    }

    // Case 2: Insert at position 1 (beginning)
    if (position == 1) {

        Node* temp = head;

        // Go to last node
        while (temp->next != head) {
            temp = temp->next;
        }

        newNode->next = head;
        temp->next = newNode;  // last node points to new node
        head = newNode;        // update head
        return;
    }

    // Case 3: Insert at any other position

    Node* temp = head;
    int i = 1;

    // Move to (position - 1)
    while (i < position - 1 && temp->next != head) {
        temp = temp->next;
        i++;
    }

    // Out of range
    if (i != position - 1) {
        cout << "Invalid position!\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void traverse() {

    if (head == NULL) {
        cout << "\nList is empty.\n";
        return;
    }

    Node* temp = head;

    cout << "\nCircular Linked List: ";

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main() {

    int n, pos;
    cout << "How many nodes to insert? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter position to insert: ";
        cin >> pos;
        insertAtPositionCLL(pos);
        traverse();
    }

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

void insertAtPositionCLL(int position) {

    int newData;
    cout << "\nEnter the value: ";
    cin >> newData;

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    // Case 1: Empty list + position 1 only
    if (head == NULL) {
        if (position != 1) {
            cout << "Invalid position! List is empty.\n";
            return;
        }
        newNode->next = newNode;
        head = newNode;
        return;
    }

    // Case 2: Insert at position 1 (beginning)
    if (position == 1) {

        Node* temp = head;

        // Go to last node
        while (temp->next != head) {
            temp = temp->next;
        }

        newNode->next = head;
        temp->next = newNode;  // last node points to new node
        head = newNode;        // update head
        return;
    }

    // Case 3: Insert at any other position

    Node* temp = head;
    int i = 1;

    // Move to (position - 1)
    while (i < position - 1 && temp->next != head) {
        temp = temp->next;
        i++;
    }

    // Out of range
    if (i != position - 1) {
        cout << "Invalid position!\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void traverse() {

    if (head == NULL) {
        cout << "\nList is empty.\n";
        return;
    }

    Node* temp = head;

    cout << "\nCircular Linked List: ";

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main() {

    int n, pos;
    cout << "How many nodes to insert? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter position to insert: ";
        cin >> pos;
        insertAtPositionCLL(pos);
        traverse();
    }

    return 0;
}
>>>>>>> 5ceaf5a0a82de92bd37db1187631c986f3e396df
