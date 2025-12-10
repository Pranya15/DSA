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

void deleteAtEnd(Node*& head) {

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

    Node* last = head->prev;
    Node *secondlast=last->prev;
    secondlast->next=head;
    head->prev=secondlast;

    delete last;
}

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

    cout << "\nDeleting the last node...\n";
    deleteAtEnd(head);

    traverseCDLL();

    return 0;
}
