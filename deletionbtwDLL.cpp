#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void deleteAtPos(Node* &head, int pos) {

    // Case 1: Empty list
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // Case 2: Invalid position
    if (pos < 1) {
        cout << "Invalid position\n";
        return;
    }

    // Case 3: Deleting first node
    if (pos == 1) {
        Node* temp = head;
        head = head->next;

        if (head != nullptr)
            head->prev = nullptr;

        delete temp;
        return;
    }

    Node* temp = head;

    // Move temp to node BEFORE target
    for (int i = 1; i < pos - 1; i++) {

        if (temp == nullptr) {
            cout << "Position out of range\n";
            return;
        }

        temp = temp->next;
    }

    // Now delete using current = temp->next
    Node* current = temp->next;

    if (current == nullptr) {
        cout << "Position out of range\n";
        return;
    }

    // Adjust links
    temp->next = current->next;

    if (current->next != nullptr)
        current->next->prev = temp;

    delete current;
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

    head = new Node{10, nullptr, nullptr};
    head->next = new Node{20, nullptr, head};
    head->next->next = new Node{30, nullptr, head->next};
    head->next->next->next = new Node{40, nullptr, head->next->next};

    cout << "Original List: ";
    traverse(head);

    int pos;
    cout << "\nEnter position to delete: ";
    cin >> pos;

    deleteAtPos(head, pos);

    cout << "\nList after deletion: ";
    traverse(head);

    return 0;
}
