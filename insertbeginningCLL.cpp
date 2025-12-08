<<<<<<< HEAD
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *head = NULL;

void insertAtBegCLL() {
	int newData;
	cout << "\nEnter the value: ";
	cin >> newData;

	// Create a new node
	Node *newNode = new Node();
	newNode->data = newData;

	// If the list is empty
	if (head == NULL) {
		newNode->next = newNode;
		head = newNode;
	}
	else {
		Node *temp = head;

		// Traverse to the last node
		while (temp->next != head) {
			temp = temp->next;
		}

		newNode->next = head;     // link newNode to current head
		temp->next = newNode;     // link last node to newNode
		head = newNode;           // move head to newNode
	}
}

int main() {

	int n;
	cout << "How many nodes to insert at beginning? ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		insertAtBegCLL();
	}

	return 0;
=======
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *head = NULL;

void insertAtBegCLL() {
	int newData;
	cout << "\nEnter the value: ";
	cin >> newData;

	// Create a new node
	Node *newNode = new Node();
	newNode->data = newData;

	// If the list is empty
	if (head == NULL) {
		newNode->next = newNode;
		head = newNode;
	}
	else {
		Node *temp = head;

		// Traverse to the last node
		while (temp->next != head) {
			temp = temp->next;
		}

		newNode->next = head;     // link newNode to current head
		temp->next = newNode;     // link last node to newNode
		head = newNode;           // move head to newNode
	}
}

int main() {

	int n;
	cout << "How many nodes to insert at beginning? ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		insertAtBegCLL();
	}

	return 0;
>>>>>>> 5ceaf5a0a82de92bd37db1187631c986f3e396df
}