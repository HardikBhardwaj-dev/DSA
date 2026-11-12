#include <iostream>
using namespace std;

void hanoi(int n, char source, char dest, char helper){
    if(n==1){
        cout<<"Moved disk "<<n<<" from Tower "<<source<<" to "<<dest<<endl;
        return;
    }
    hanoi(n-1,source,helper,dest);
    cout<<"Moved disk "<<n<<" from Tower "<<source<<" to "<<dest<<endl;
    hanoi(n-1,helper,dest,source);
    return;

}

int main(){
    int n;
    cout<<"Enter the number of disk: ";
    cin>>n;
    hanoi(n,'A','B','C');
}