#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     int height[] = {1,8,6,2,5,4,8,3,7};
//     int n= 9;
//     int start=0;
//     int end= n-1;
//     int temp=0;
//     int vol=0;

//     while (start<end){
//         if (height[start]<height[end]){
//             vol= height[start] *( end-start);
//             start++;
//         }
//         else{
//             vol= height[end] *(end-start);
//             end--;
//         }

//         if (temp<vol){
//             temp=vol;
//         }
//     }

//     cout<< temp;
// }


//  LEET CODE STYLE SOLUTION

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end= height.size()-1;
        int temp=0;
        int vol=0;

        while (start<end){
            if (height[start]<height[end]){
                vol= height[start] *( end-start);
                start++;
            }
            else{
                vol= height[end] *(end-start);
                end--;
            }

            if (temp<vol){
                temp=vol;
            }
        }
        return temp;
    }
};