#include <iostream>
using namespace std;

int tower(int n){
    if(n==1) return 1;

    int ans= 2* tower(n-1)+1;
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=tower(n);
    cout<<ans;

}