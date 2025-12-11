#include <iostream>
using namespace std;

/* Node class */
class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = nullptr;
    }
};

/* Stack class */
class stack {
public:
    node* top;

    stack() {
        top = nullptr;
    }

    // PUSH
    void push(int value) {
        node* newNode = new node(value);
        newNode->next = top;
        top = newNode;

        cout << value << " got inserted successfully..." << endl;
    }

    // POP
    void pop() {
        if (top == nullptr) {
            cout << "Stack empty..." << endl;
        } else {
            node* temp = top;
            top = top->next;
            cout << temp->data << " got deleted successfully..." << endl;
            delete temp;   // important: free memory
        }
    }

    // PEEK
    void peek() {
        if (top == nullptr) {
            cout << "Stack empty" << endl;
        } else {
            cout << "Top of stack: " << top->data << endl;
        }
    }

    // DISPLAY
    void display() {
        if (top == nullptr) {
            cout << "Stack empty" << endl;
        } else {
            node* temp = top;
            while (temp != nullptr) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};

int main() {
    stack myStack;
    int choice;

    cout << "Enter any number to continue and 0 to terminate: ";
    cin >> choice;

    while (choice != 0) {
        int press;
        cout << "\nPress 1: To Push"
             << "\nPress 2: To Pop"
             << "\nPress 3: To Peek"
             << "\nPress 4: To Display\n";
        cin >> press;

        switch (press) {
        case 1: {
            int value;
            cout << "Enter the value: ";
            cin >> value;
            myStack.push(value);
            break;
        }
        case 2:
            myStack.pop();
            break;
        case 3:
            myStack.peek();
            break;
        case 4:
            myStack.display();
            break;
        default:
            cout << "Enter valid choice..." << endl;
        }

        cout << "\nEnter any number to continue and 0 to terminate: ";
        cin >> choice;
    }

    return 0;
}
