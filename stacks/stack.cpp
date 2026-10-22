#include <iostream>
using namespace std;

const int SIZE=5;

class Stack{
    public:
    int top;
    int arr[SIZE];
    Stack(){
        top=-1;
    }

    void enstack(int data){
        if(top==top==SIZE-1){
            cout<<"Stack overflow ";
            return;
        }
        if(top==-1){
            top++;
            arr[top]=data;
            return;
        }
        top++;
        arr[top]=data;
    }

    void deleted(){
        if(top==-1){
            cout<<"Underflow";
        }
        int x=arr[top];
        top--;
        cout<<x<<" ";
    }
    void display(){
        for(int i=0;i<SIZE;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void peek(){
        cout<<arr[top]<<endl;
    }
};

int main(){
    Stack s;
    int d;
    for(int i=0;i<SIZE;i++){
        cout<<"Enter the data: ";
        cin>>d;
        s.enstack(d);
    }
    s.display();
    s.peek();
    for(int i=0;i<SIZE;i++){
        s.deleted();
    }
    // s.peek();
    // s.display();
}