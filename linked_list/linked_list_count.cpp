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

void insertStart(Node *&head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertTail(int d,Node *&tail){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertPosition(Node *&head,int pos,int data,Node *&tail){
    if(pos==1){
        insertStart(head,data);
        return;
    }
    int i=1;
    Node *curr=head;
    while(i<pos-1 && curr->next!=nullptr){
        curr=curr->next;
        i++;
    }

    if(curr->next==nullptr){
        insertTail(data,tail);
        return;
    }

    Node *temp=new Node(data);
    temp->next=curr->next;
    curr->next=temp;

}
void count(Node *&head){
    Node *curr=head;
    int count=0;
    while(curr!=nullptr){
        count++;
        curr=curr->next;
    }
    cout<<count<<endl;
}

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
    Node *tail=ptr; // is pointint the tail pointer to first node named as ptra
    Node *ptr1= new Node(20);
    Node *ptr2= new Node(30);
    Node *ptr3= new Node(40);
    ptr->next=ptr1;
    ptr1->next=ptr2;
    ptr2->next=ptr3;
    ptr3->next=nullptr;
    tail=ptr3;

    // insertPosition(head,1,20,tail);/`
    insertPosition(head,3,50,tail);
    count(head);
    display(head);
}