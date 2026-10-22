#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
void insertEnd(Node *&head,int d){
    Node *temp=new Node();
    temp->data=d;
    temp->next=nullptr;
    Node *curr=head;
    while(curr->next!=nullptr){
        
    }
}

int main(){
    Node *head=nullptr;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        insertEnd(head,x);
    }
    int R;
    cin>>R;
    // deleteByValue(head,R);

    // display(head);
}