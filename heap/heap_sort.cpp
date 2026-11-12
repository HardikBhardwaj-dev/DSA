#include <iostream>
using namespace std;


void heapify(int arr[],int size,int n){
    int leftChild=(2*n)+1;
    int rightChild=(2*n)+2;
    int index=-1;
    if(arr[leftChild]>arr[rightChild]){
        index=leftChild;
    }
    else{
        index=rightChild;
    }


}

void maxheap(int arr[],int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
}

void heap_sort(int arr[],int n){
    maxheap(arr,n);

    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}



int main(){
    int arr[5]={40,10,30,50,20};
    int size=5;

    cout<<"Original array: ";

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heap_sort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}