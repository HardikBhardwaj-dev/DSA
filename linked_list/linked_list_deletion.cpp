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

void deleteHead(Node *&head){
    Node *curr=head;
    head=head->next;
    delete curr;
}

void deleteTail(Node *head){
    Node *curr=head;
    while(curr!=nullptr){
        curr=curr->next;
    }
    delete curr;
}
void deletion(Node *&head,int pos){
    if(pos==1){
        deleteHead(head);
        return;
    }
    Node *curr=head;
    Node *prev=nullptr;
    
    int i=1;
    while(i<pos && curr->next!=nullptr){
        prev=curr;
        curr=curr->next;
        i++;

    }
    // if(curr->next=nullptr){
    //     deleteTail(head);
    //     return;
    // }
    prev->next=curr->next;
    delete curr;

}

void display(Node *&head){
    Node *curr=head;
    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main(){
    Node *ptr= new Node(10);
    Node *ptr1=new Node(20);
    Node *ptr2=new Node(30);
    Node *ptr3=new Node(40);
    Node *ptr4= new Node(50);
    ptr->next=ptr1;
    ptr1->next=ptr2;
    ptr2->next=ptr3;
    ptr3->next=ptr4;
    Node *head=ptr;
    Node *tail=ptr4;
    display(head);
    // deletion(head,1);
    deletion(head,5);
    // deletion(head,3);
    display(head);
}