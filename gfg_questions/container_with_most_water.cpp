#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int start=0;
        int end= arr.size()-1;
        int temp=0;
        int vol=0;

        while (start<end){
            if (arr[start]<arr[end]){
                vol= arr[start] *( end-start);
                start++;
            }
            else{
                vol= arr[end] *(end-start);
                end--;
            }
            if (temp<vol){
                temp=vol;
            }
        }
        return temp;
    }
};