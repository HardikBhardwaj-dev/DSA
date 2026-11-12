#include <iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }

    int temp=factorial(n-1);
    int check=n*temp;
    return check;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int answer=factorial(n);
    cout<<answer;
}