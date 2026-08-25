#include <iostream>
#include <vector>
using namespace std;

// int main(){
    // int arr[]= {10, 0,10};
    // int read=0;
    // int write=0;
    // int temp=0;
    // bool is_present=true;

    // for (int i=0;i<3;i++){
    //     if (arr[i]!=0){
    //         is_present=false;
    //     }
    //     else{
    //         is_present=true;
    //         break;
    //     }
    // }

    // while (read<3){
    //     if (arr[read]==0){
    //         read++;
    //     }
    //     else if (arr[read]!=0){
    //         temp=arr[read];
    //         arr[read]=arr[write];
    //         arr[write]=temp;
    //         read++;
    //         write++;
    //     }
    // }

    // if (is_present){
    //     for(int i=0;i<3;i++){
    //     cout<<arr[i]<<" ";
    //     }
    // }   
    // else{
    //     cout<< "-1";
    // }
// }

//  GFG SOLUTION


class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int read=0;
        int write=0;
        int temp=0;

        while (read<arr.size()){
            if (arr[read]==0){
                read++;
            }
            else if (arr[read]!=0){
                temp=arr[read];
                arr[read]=arr[write];
                arr[write]=temp;
                read++;
                write++;
            }
        }

    }
};