#include <iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
};

Node* head = NULL;

int main() {
    int value = 10, priority = 3;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->priority = priority;
    newNode->next = NULL;

    // Empty queue or highest priority
    if (head == NULL || priority > head->priority) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL && temp->next->priority >= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    cout << "Inserted: " << value << " with priority " << priority;
    return 0;
}