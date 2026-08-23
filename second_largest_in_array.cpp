// GFG Second Largest in an array

#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,5,10};
    int largest=arr[0];
    int second_largest=0;
    bool check=true;

    for(int i=0;i<3-1;i++){
        if(arr[i]==arr[i+1]){
            check=false;
        }
        else{
            check= true;
        }
    }

    for(int i=0;i<3;i++){
        if (largest<arr[i]){
            largest=arr[i];
        }
    }

    for(int i=0; i<3;i++){
        if (second_largest<arr[i] && largest!=arr[i]){
            second_largest=arr[i];
        }
    }
    if (check){
        cout<<second_largest;
    }
    else{
        cout<<-1;
    }
}

// GFG ANSWER


class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=arr[0];
        int second_largest=0;
        bool check=true;
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                check=false;
            }
            else{
                check= true;
            }
        }
        
        for(int i=0;i<arr.size();i++){
            if (largest<arr[i]){
                largest=arr[i];
            }
        }
        
        for(int i=0; i<arr.size();i++){
            if (second_largest<arr[i] && largest!=arr[i]){
                second_largest=arr[i];
            }
        }
        if (check){
            return second_largest;
        }
        else{
            return -1;
        }
    }
};