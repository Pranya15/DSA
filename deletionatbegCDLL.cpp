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

// Delete at beginning in CDLL
void deleteAtBeg(Node*& head) {

    // 1. Empty list
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // 2. Only one node
    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }

    // 3. More than one node
    Node* temp = head;
    Node* last = head->prev;

    head = head->next;      // move head
    head->prev = last;      // connect new head to last
    last->next = head;      // connect last to new head

    delete temp;
}

// Traversal
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
    temp = head->prev;  // start from last node
    Node* last = temp;
    do {
        cout << temp->data << " ";
        temp = temp->prev;
    } while (temp != last);
    cout << endl;
}

int main() {

    // Creating a CDLL manually
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);

    // Connect forward
    n1->next = n2;
    n2->next = n3;
    n3->next = n1;

    // Connect backward
    n1->prev = n3;
    n2->prev = n1;
    n3->prev = n2;

    head = n1;

    traverseCDLL();

    cout << "\nDeleting the first node...\n";
    deleteAtBeg(head);

    traverseCDLL();

    return 0;
}
