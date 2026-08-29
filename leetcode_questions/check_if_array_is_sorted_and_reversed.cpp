// LEETCODE STYLE SOLUTION
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int last= nums.size()-1;
        int count=0;
        for (int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                count++;
            }
        }
        if (nums[last]>nums[0]){
            count++;
        }
        if (count<=1){
            return true;
        }
        return false;
    }
};