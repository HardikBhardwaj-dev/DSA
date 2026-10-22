#include <iostream>
using namespace std;

const int SIZE=5;
class queue{
    public:
    int top;
    int rear;
    int arr[SIZE];
    queue(){
        top=rear=-1;
    }
    void enqueue(int data){
        if((top==(rear+1)%SIZE)){
            cout<<"Queue overflow"<<endl;
            return;
        }
        if(rear==-1){
        top=rear=0;
        arr[rear]=data;
        return;
        }
        rear=(rear+1)%SIZE;
        arr[rear]=data;
    }
    

    int dequeue(){
        if(top==-1){
            cout<<"Queue underflow";
            return 0;
        }
        int x=arr[top];
        if(top==rear){
            top=rear=-1;
            return x;
            
        }
        
        top=(top+1)%SIZE;
        return x;
    }
  
    void display(){
        for(int i=top;i<rear+1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    queue q;
    int d;
    
    for(int i=0;i<SIZE;i++){
        cout<<"Enter the data: ";
        cin>>d;
        q.enqueue(d);
    }

    q.display();
    for(int i=q.top;i<3;i++){
        int x=q.dequeue();
        cout<<x<<" ";
    }
}