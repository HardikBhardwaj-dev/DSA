#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={4,5,1,3,2};
    int temp=0;

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}