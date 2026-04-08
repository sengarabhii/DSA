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
    ~Node(){
        int data = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout << "memory freed for node of value " << data <<endl;
    }
};
void insert(Node* &tail,int ref,int data){
    //list is empty
    if(tail==NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    else{
        //ref is value ahead of which data is to inserted
        //assuming give ref value is present
        Node* newnode = new Node(data);
        Node* curr = tail;
        while(curr->data!=ref){
            curr = curr->next;
        }
        //now curr refering to ref node ahead of which data is to inserted
        newnode->next = curr->next;
        curr->next = newnode;

    }
}
void del(Node* &tail,int value){
    if(tail==NULL){
        cout << "empty list " <<endl;
        return;
    }
    Node* prev = tail;
    Node* curr = prev->next;
    //assuming value if present
    while(curr->data!=value){
        prev = curr;
        curr = curr->next;
    }
    //single node
    if(prev == curr){
        tail = NULL;
    }
    else{
        prev->next = curr->next;
        tail = prev;
    }
    curr->next = NULL;
    delete curr;

}
void mydel(Node* &tail,int value){
    if(tail==NULL){
        cout << "empty list " <<endl;
        return;
    }
    //single node
    if(tail->next ==  tail){
        Node* temp = tail;
        temp->next = NULL;
        tail = NULL;
        delete temp;
    }
    //assuming value if present
    if(tail->data==value){
        Node* curr = tail;
        Node* prev = tail;
        while(prev->next!=tail){
            prev = prev->next;
        }
        prev->next = curr->next;
        tail = curr->next;
        curr->next = NULL;
        delete curr;
        return;
    }
    Node* curr = tail;
    Node* prev = NULL;
    while(curr->data!=value){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}

void traverse(Node* tail){
    if(tail==NULL){
        cout << "list is empty!!!" <<endl;
    }
    Node* temp = tail;
    do{
        cout << temp->data <<" ";
        temp = temp->next;
    }
    while(temp!=tail);
    cout <<endl;
}
int main(){
    Node* tail = NULL;
    insert(tail,5,1);
    traverse(tail);
    insert(tail,1,2);
    traverse(tail);
    insert(tail,1,3);
    traverse(tail);
    insert(tail,2,4);
    traverse(tail);
    insert(tail,4,5);
    traverse(tail);
    del(tail,1);
    traverse(tail);
    del(tail,5);
    traverse(tail);
    del(tail,2);
    traverse(tail);
    del(tail,3);
    traverse(tail);
    del(tail,4);
    traverse(tail);
}