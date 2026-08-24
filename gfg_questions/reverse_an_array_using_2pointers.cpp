#include <iostream>
#include <vector>
using namespace std;

int main(){
    int start=0;
    int end=5 ;
    int temp=0;
    int arr[]={1, 4, 3, 2, 6, 5};
        
    while (start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}


// GFG SOLUTION 

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int start=0;
        int end= arr.size()-1;
        int temp=0;
        
        while (start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
};