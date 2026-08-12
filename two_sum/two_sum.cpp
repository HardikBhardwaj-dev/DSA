#include <iostream>
using namespace std;

int main(){
    int arr[]= {2,7,11,15};
    int target=9;
    int sum=0;
    int length= sizeof(arr)/sizeof(arr[0]);
    int f_index=0;
    int sec_index=0;
    bool found= false;

    for (int i=0;i<length;i++){
        for (int j=1+i;j<length;j++){
            sum= arr[i]+arr[j];
            if (sum==target){
                f_index=i;
                sec_index=j;
                found=true;
                break;
            }

        }
        if (found){
            break;
        }
    }
    cout<<f_index<<","<<sec_index;
}