#include<iostream>
using namespace std;
class Queue {
    int* arr;
    int qfront;
    int rear;
    int size;
public:
    Queue() {
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }


    bool isEmpty() {
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(qfront==size){
            return;
        }
        arr[rear] = data;  
        rear++;
    }

    int dequeue() {
        if(qfront==rear){
            return -1;
        }
        int data = arr[qfront];
        arr[qfront] = -1;
        qfront++;
        if(qfront==rear){
            qfront = 0;
            rear = 0;
        }
        return data;
    }

    int front() {
        if(qfront==rear){
            return -1;
        }
        return arr[qfront];
    }
};
int main(){
    Queue q;
    if(q.isEmpty()){
        cout << "queue is empty " <<endl;
    }
    q.enqueue(5);
    cout << "front element is " << q.front() <<endl;
    q.enqueue(6);
    cout << "front element is " << q.front() <<endl;
    q.enqueue(7);
    cout << "front element is " << q.front() <<endl;
    q.dequeue();
    cout << "front element is " << q.front() <<endl;
}