#include <vector>
#include <iostream>
using namespace std;

// // GFG STYLE SOLUTION WITH O(n) time complexity

// class Solution {
//   public:
//     int peakElement(vector<int> &arr) {
//         // code here

//         for (int i=0;i<arr.size();i++){
//             if (i==0 && arr[i]>arr[i+1]){
//                 return i;
//             }
//             else if (i==arr.size()-1 && arr[i]>arr[i-1]){
//                 return i;
//             }
//             else if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
//                 return i;
//             }
//         }
//     }
// };

//  GFG STYLE SOLUTION WITH O(log n) time complexity

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int start=0;
        int end= arr.size()-1;
        
        if (arr.size()==1) return 0;
        
        while (start<=end){
            int mid = (start+end)/2;
            if (mid!=0 && mid!=arr.size()-1 && arr[mid]>arr[mid+1] && arr[mid]> arr[mid-1]){
                return mid;
            }
            
            else if(mid==0 && arr[mid]>arr[mid+1]){
                return mid;            
            }
            else if(mid==arr.size()-1 && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if (mid>0 && arr[mid]<arr[mid-1]){
                end= mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
};