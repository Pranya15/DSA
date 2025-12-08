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

// Delete at specific position
void deleteAtPos(Node*& head, int position) {

    // 1. Empty list
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // 2. Invalid position
    if (position <= 0) {
        cout << "Invalid position\n";
        return;
    }

    // 3. Only one node
    if (head->next == head && position == 1) {
        delete head;
        head = nullptr;
        return;
    }

    // 4. Delete at beginning (position = 1)
    if (position == 1) {
        Node* last = head->prev;
        Node* temp = head;

        head = head->next;
        head->prev = last;
        last->next = head;

        delete temp;
        return;
    }

    // 5. Delete at position > 1
    Node* temp = head;
    int i = 1;

    // Traverse to (position - 1)
    while (temp->next != head && i < position - 1) {
        temp = temp->next;
        i++;
    }

    // If position is out of range
    if (temp->next == head) {
        cout << "Invalid position\n";
        return;
    }

    Node* current = temp->next;      // node to delete

    temp->next = current->next;      // link around
    current->next->prev = temp;

    delete current;
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
    temp = head->prev;
    Node* last = temp;
    do {
        cout << temp->data << " ";
        temp = temp->prev;
    } while (temp != last);
    cout << endl;
}

int main() {

    // Create CDLL
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);

    n1->next = n2;
    n2->next = n3;
    n3->next = n1;

    n1->prev = n3;
    n2->prev = n1;
    n3->prev = n2;

    head = n1;

    traverseCDLL();

    int pos;
    cout << "\nEnter position to delete: ";
    cin >> pos;

    deleteAtPos(head, pos);

    traverseCDLL();

    return 0;
}
