#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void deleteAtEnd(Node* &head) {

    // Step 1: Check if list is empty
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    // Step 2: Only one node
    if (head->next == nullptr) {
        Node *temp = head;
        head = nullptr;
        delete temp;
        return;
    }

    // Step 3: Move temp to last node
    Node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Now temp is last node
    Node *prevNode = temp->prev;
    prevNode->next = nullptr;

    delete temp;
}

void traverse(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    Node* head = nullptr;

    // Create some nodes
    head = new Node{10, nullptr, nullptr};
    head->next = new Node{20, nullptr, head};
    head->next->next = new Node{30, nullptr, head->next};

    cout << "Original List: ";
    traverse(head);

    cout << "\nDeleting last node...\n";
    deleteAtEnd(head);

    cout << "List after deletion: ";
    traverse(head);

    return 0;
}
