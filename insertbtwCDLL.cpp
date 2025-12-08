#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

Node* head = nullptr;

// Insert at any position
void insertAtBtw(Node*& head, int newData, int Position) {

    Node* newNode = new Node(newData);

    // 1. Empty list
    if (head == nullptr) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return;
    }

    // 2. Insert at beginning
    if (Position == 1) {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        head = newNode;
        return;
    }

    // 3. Traverse to (Position - 1)
    Node* temp = head;
    int i = 1;

    while (temp->next != head && i < Position - 1) {
        temp = temp->next;
        i++;
    }

    // 4. Insert after temp
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

// Traversal function
void traverseCDLL() {

    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;

    cout << "Forward Traversal: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;

    cout << "Backward Traversal: ";
    temp = head->prev;
    do {
        cout << temp->data << " ";
        temp = temp->prev;
    } while (temp != head->prev);
    cout << endl;
}

int main() {

    // Creating a CDLL manually
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);

    head = n1;

    n1->next = n2;
    n2->next = n3;
    n3->next = n1;

    n1->prev = n3;
    n2->prev = n1;
    n3->prev = n2;

    traverseCDLL();

    int Position;
    cout << "\nEnter the position to insert: ";
    cin >> Position;

    cout << "Inserting 5 at position " << Position << "...\n";
    insertAtBtw(head, 5, Position);

    traverseCDLL();

    return 0;
}
