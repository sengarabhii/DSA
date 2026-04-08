#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Stack{
    public:
    Node* top=NULL;
    Node* head=NULL;
    //push
    void push(int data){
        Node* newnode = new Node(data);
        if(top==NULL){
            top=newnode;
            head=newnode;
            return;
        }
        top->next = newnode;
        top = newnode;
    }
    void pop(){
        if(top==NULL){
            cout << "underflow" <<endl;
            return;
        }
        if(head->next==NULL){
            cout << head->data << " deleted" <<endl;
            Node* temp = head;
            head = NULL;
            top = NULL;
            delete temp;
            return;
        }
        Node* temp = head;
        while(temp->next!=top){
            temp=temp->next;
        }
        int val = top->data;
        temp->next = NULL;
        top = temp;
        cout << val << " deleted" <<endl;
    }
    void peek(){
        if(top==NULL){
            cout << "empty" <<endl;
            return;
        }
        cout << top->data <<endl;
    }

};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(4);
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.push(5);
    s.peek();
}