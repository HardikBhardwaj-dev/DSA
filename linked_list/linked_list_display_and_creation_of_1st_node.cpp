#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        data=d;
        next=nullptr;
    }
};

void display(Node *head){
    Node *curr=head;  // is a pointer pointing to the head
    while(curr!=nullptr){
        cout<< curr->data<<" ";
        curr=curr->next;  
    }
}



int main(){
    Node *ptr= new Node(10);  // is creating a new object dynamically at run time named as ptr
    Node *head=ptr; // is pointing the head pointer to the first node named as ptr
    Node *tail=ptr; // is pointint the tail pointer to first node named as ptr
    display(head);
}