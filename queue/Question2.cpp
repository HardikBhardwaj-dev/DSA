#include <iostream>
#define MAX_SIZE 5
using namespace std;

int ticketIDs[MAX_SIZE];
int front;
int rear;

void initializeQueue() {
    front=rear=-1;
}

bool isEmpty() {
    if(rear==-1 || front>rear){
        return true;
    }
    return false;
}

bool isFull() {
    if(rear==MAX_SIZE-1){
        return true;
    }
    return false;
}

bool enqueue(int ticketID) {
    if(!isFull()){
        if(rear==-1){
            front=rear=0;
            ticketIDs[rear]=ticketID;
            return true;
        }
        rear++;
        ticketIDs[rear]=ticketID;
        return true;
    }
    else{
        return false;
    }
}

bool dequeue(int& ticketID) {
    if(isEmpty()){
        return false;
    }
    else{
        ticketID=ticketIDs[front];
        if(front==rear){
            front=rear=-1;
        }else{
        front++;
        }
        return true;
    }
}

void display() {
    if(isEmpty()){
        cout<<"Queue is empty";
        return;
    }
    cout<<"Queue: ";
    for(int i=front;i<=rear;i++){
        cout<<ticketIDs[i]<<" ";
    }
    cout<<endl;
    
}

int main() {
    int ticketID;
    int option;

    initializeQueue();

    while (true) {
        try {
            cin >> option;
        } catch (...) {
            break;
        }

        switch (option) {
            case 1:
                try {
                    cin >> ticketID;
                } catch (...) {
                    break;
                }
                if (enqueue(ticketID)) {
                    // Helpdesk ticket enqueued successfully
                    cout<<"Enqued Helpdesk Ticket id: "<<ticketID<<endl;
                }
                else{
                    cout<<"Queue is full";
                }
                break;

            case 2:
                if (dequeue(ticketID)) {
                    cout << "Dequeued Helpdesk Ticket ID: " << ticketID << endl;
                } else {
                    cout << "Queue is empty." << endl;
                }
                break;

           d case 3:
                display();
                break;

            case 4:
                cout << "Exiting the program" << endl;
                return 0;

            default:
                cout << "Invalid option." << endl;
                break;
        }
    }

    return 0;
}