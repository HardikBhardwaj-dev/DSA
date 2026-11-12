#include <iostream>
using namespace std;

class MaxHeap{
    public:
        int arr[100]={50,30,25,10,20,10,25};
        int size=8;

    void insert(int d){
        arr[size]=d;
        size++;

        int par=(size-1)/2;
        if(arr[par]<arr[size]){
                        
        }

    }
};

int main(){
    MaxHeap m;
    m.insert(55);
}