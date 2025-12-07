#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtPosition(Node* &head, int position) {

    // Step 1: Check if the list is empty
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    // Step 2: Check if position is valid
    if (position < 1) {
        cout << "Invalid position" << endl;
        return;
    }

    // Step 3: If deleting the first node
    if (position == 1) {
        Node* temp = head;
        head = head->next;  // Move head to next node
        delete temp;        // Delete first node

        // Output list
        Node* p = head;
        cout << "List after deletion: ";
        while (p != nullptr) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
        return;
    }

    // Step 4: Find the node before the position
    Node* current = head;
    for (int i = 1; i < position - 1; i++) {
        if (current == nullptr || current->next == nullptr) {
            cout << "Invalid position" << endl;
            return;
        }
        current = current->next;  // Move to next node
    }

    // Step 5: Delete the node at the position
    if (current == nullptr || current->next == nullptr) {
        cout << "Invalid position" << endl;
        return;
    }

    Node* temp = current->next;     // Node to be deleted
    current->next = temp->next;     // Link previous node to next node
    delete temp;

    // Step 6: Output the list after deletion
    cout << "List after deletion: ";
    Node* p = head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Sample list
    head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};

    cout << "Original List: 10 20 30 40" << endl;

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    deleteAtPosition(head, pos);

    return 0;
}   