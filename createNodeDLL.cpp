#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    //constructor function 
    Node(int value){
       this-> data= value;
       this-> next= nullptr;
       this-> prev= nullptr;
    }
};
int main(){
    int value;
    cout<< "Enter the value to be inserted in the first node:";
    cin>> value;
    Node *Node1= new Node(value);
    Node *head = Node1;
    cout<< Node1 -> data <<endl;
    cout<< Node1-> next;
    cout<< Node1-> prev;
    return 0;
}
