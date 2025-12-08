#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtPos(Node* &head, int pos) {

    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // CASE 1: Delete at position 1
    if (pos == 1) {

        // Only one node
        if (head->next == head) {
            delete head;
            head = nullptr;
            return;
        }

        // More than one node — find last node using temp
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        Node* current = head;
        temp->next = head->next;  // link last to second node
        head = head->next;        // move head
        delete current;           // delete old head
        return;
    }

    // CASE 2: Delete at position > 1
    Node* temp = head;
    int i = 1;

    // reach node BEFORE the target
    while (temp->next != head && i < pos - 1) {
        temp = temp->next;
        i++;
    }

    // Invalid position
    if (temp->next == head) {
        cout << "Invalid position\n";
        return;
    }

    Node* current = temp->next;         // node to be deleted
    temp->next = current->next;         // bypass
    delete current;
}

void traverse(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};
    head->next->next->next->next = head;

    cout << "Original List: ";
    traverse(head);

    deleteAtPos(head, 3);  // delete position 3

    cout << "After Deletion: ";
    traverse(head);

    return 0;
}
