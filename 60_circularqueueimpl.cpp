#include<iostream>
using namespace std;
class CircularQueue{
    int* arr;
    int rear;
    int front;
    int size;
    public:
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //queue is empty
        if(front==-1){
            front = rear = 0;
        }
        else if(rear==size-1 && front!=0){
            //to maintain cyclic nature
            rear = 0;
        }
        else if((rear==size-1 && front==0) || (rear==(front-1))){
            //queue is full
            return false;
        }
        else{
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        //if queue is empty
        if(front==-1){
            return -1;
        }
        int value = arr[front];
        arr[front] = -1;
        //if single element is present
        if(front==rear){
            front = rear = -1;
        }
        else if(front==size-1){
            //to maintain cyclic nature
            front = 0;
        }
        else{
            front++;
        }
        return value;
    }
};
int main(){

}