// INSERTION OF 25 AT 2ND INDEX OF THE ARRAY
#include<iostream>
using namespace std;

// int main(){
//     int size=6;
//     int arr[size];
//     cout<<"Enter the elements of array"<<endl;
//     for (int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     for (int i=size-1;i>=2;i--){
//         arr[i+1]=arr[i];
//     }

//     arr[2]=25;

//     for (int i=0;i<+size+1;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// DELETION OF AN ELEMENT AT SPECIFIC INDEX EX: 3

int main(){
    int size=6;
    int arr[size];
    cout<<"Enter the elements of array"<<endl;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    for (int i=3;i<size;i++){
        arr[i-1]=arr[i];
    }

    for (int i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }
}