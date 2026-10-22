#include <iostream>
using namespace std;

#define MAX_SIZE 100

char arr[MAX_SIZE];
int top;


void initialize() {
    top=-1;
}

bool isFull() {
    if(top==MAX_SIZE-1){
        return true;
    }
    return false;
}

bool isEmpty() {
    if(top==-1){
        return true;
    }
    return false;
}

void pushCharacter(char value) {
    if(!isFull()){
        top++;
        arr[top]=value;
        cout<<"inseted character is: "<<value<<endl;
        return;
    }
    else{
        cout<<"Stack is overflowed\n";
    }
}

void popCharacter() {
    if(!isEmpty()){
        char x=arr[top];
        top--;
        cout<<"popped: "<<x<<endl;
    }
    else{
        cout<<"Stack is underflow\n";
    }

}

void view() {
       if(isEmpty()){
         cout<<"Stack is empty";
         return;
       }
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main() {
    int choice;
    char input;

    initialize();

    while (true) {
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> input;
                pushCharacter(input);
                break;
            case 2:
                popCharacter();
                break;
            case 3:
                view();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}