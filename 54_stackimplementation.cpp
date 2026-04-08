#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int top;//top is like index indicate top of stack
    int size;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        this->top = -1;
    }
    //push
    void push(int data){
        if(top==size-1){
            cout << "Overflow" <<endl;
            return;
        }
        arr[++top] = data;
    }
    //pop
    void pop(){
        if(top==-1){
            cout << "Underflow" <<endl;
            return;
        }
        int val = arr[top];
        top--;

    }
    //peek
    void peek(){
        if(top==-1){
            cout << "Stack is empty"<<endl;
            return;
        }
        cout << arr[top] <<endl;
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};
int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.peek();
    cout << s.isempty() <<endl;

}