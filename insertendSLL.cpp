#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        this->data=value;
        this->next=nullptr;
    }
};
 void insertAtEnd(Node*&head,int newData){
    //create a new node
    Node *newNode = new Node(newData);
    newNode->data=newData;
    newNode->next=nullptr;
     if(head==nullptr){
        head=newNode;
        return;
     }
     Node*temp=head;
     while(temp->next!=nullptr){
        temp=temp->next;
     }
     temp->next=newNode;
 }


void traverse(Node*&head){
    Node *temp=head;

    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    }
      int main() {
    Node *head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    traverse(head);

    return 0;
}