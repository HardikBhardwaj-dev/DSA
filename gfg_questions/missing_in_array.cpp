#include <iostream>
using namespace std;

int main(){
    int arr[] = {1};
    int sum=0;
    int check=0;

    for(int i=0;i<1;i++){
        sum= sum+arr[i];
    }

    for (int i=1;i<=1+1;i++){
        check= check+i;
    }
    cout<<check-sum;
}



# GFG SOLUTION STYLE


class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int sum=0;
        int check=0;

        for(int i=0;i<arr.size();i++){
            sum= sum+arr[i];
        }

        for (int i=1;i<=arr.size()+1;i++){
            check= check+i;
        }
        int result= check-sum;
        return result;
        
    }
};