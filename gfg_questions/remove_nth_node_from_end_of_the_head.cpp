#include <iostream>
using namespace std;

int main(){
    int head[]= {1,2,3,4,5};
    int n=2;
    int deleted_index= 5-n;

    for(int i=deleted_index;i<5-1;i++){
        head[i]=head[i+1];
    }

    for (int i=0;i<4;i++){
        cout<<head[i]<<" ";
    }

}