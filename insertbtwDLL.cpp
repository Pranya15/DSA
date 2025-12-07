#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

void insertAtPos(Node*& head, int newData, int pos) {

    Node* newNode = new Node(newData);

    // INSERT AT BEGINNING
    if (pos == 1) {
        newNode->next = head;
        if (head != nullptr)
            head->prev = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;

    // Move temp to (pos-1)th node using FOR LOOP
    for (int i = 1; i < pos - 1; i++) {

        if (temp == nullptr) {
            cout << "Invalid position!" << endl;
            return;
        }

        temp = temp->next;
    }

    
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != nullptr)
        temp->next->prev = newNode;

    temp->next = newNode;
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

    head = new Node(7);

    int newData, pos;
    cout << "Enter new data: ";
    cin >> newData;

    cout << "Enter position: ";
    cin >> pos;

    insertAtPos(head, newData, pos);

    cout << "List after insertion: ";
    traverse(head);

    return 0;
}
