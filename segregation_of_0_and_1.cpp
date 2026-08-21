    #include <iostream>
    using namespace std;

    int main(){
        int arr[]={0,1,0,1,0,0,1,1,1,0};
        int start=0;
        int end=9;
        int temp=0;

        while(start<end){
            if (arr[start]>arr[end]){
                temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
                start++;
                end--;
            }
            else if (arr[start]==0){
                start++;
            }
            else if(arr[end]==1){
                end--;
            }
        }
        for(int i=0;i<=9;i++){
            cout<<arr[i];
        }
    }
