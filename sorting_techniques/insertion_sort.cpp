#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={3,5,4,2,1};
    int temp=0;

    for(int i=1;i<n;i++){
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}