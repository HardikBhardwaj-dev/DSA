#include <iostream>
using namespace std;

class MaxHeap{
    public:
    int arr[100];
    int size;

    MaxHeap(){
        size=0;
    }
    
    void insert(int d){
        arr[size]=d;
        size++;
    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    MaxHeap m;
    m.insert(50);
    m.insert(30);
    m.insert(25);
    m.insert(10);
    m.insert(20);
    m.insert(10);
    m.insert(25);

    m.display();
}