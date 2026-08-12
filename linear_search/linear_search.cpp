#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int length= 5;
    int target= 3;
    bool found= false


    cout<< "Enter the elements in array"<<endl;
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }

    for(int i=0;i<length;i++){
        if target== arr[i]{
            cout<<"Target found";
            found=true
            break;
        }
        
    }
    if(!found){
        cout<<"Target not found!";
    }
}