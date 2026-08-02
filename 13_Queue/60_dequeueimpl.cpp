#include <bits/stdc++.h> 
class Deque
{
public:
    int* arr;
    int size;
    int front;
    int rear;
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }
    //pushfront m left m badhayenge front ko and pushrear m rear ko aage badhayenge
    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //queue is full
        if(isFull()){
            return false;
        } //if queue is empty
        else if(isEmpty()){
            front = 0;
            rear = 0;
        }// for maintain cyclic nature
        else if(front==0){
            front = size-1;            
        }
        else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        //queue is full
        if(isFull()){
            return false;
        } //if queue is empty
        else if(isEmpty()){
            front = 0;
            rear = 0;
        }// for maintain cyclic nature
        else if(rear == size-1){
            rear = 0;            
        }
        else{
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        //queue is emtpy
        if(isEmpty()){
            return -1;
        }
        int value = arr[front];
        //only one element is present
        if(rear==front){
            front = -1;
            rear = -1;
        }//to maintain cyclic nature
        else if(front==size-1){
            front = 0;
        }
        else{
            front++;
        }
        return value;

        
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(isEmpty()){
            return -1;
        }
        int value = arr[rear];
        //if only one element is present
        if(front==rear){
            front = -1;
            rear = -1;
        }
        // for maintain cyclic nature
        else if(rear == 0){
            rear = size-1;            
        }
        else{
            rear--;
        }
        return value;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        return front==-1;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front==0 && rear == size-1) || ((rear+1)%size==front)){
            return true;
        }
        return false;
    }
};