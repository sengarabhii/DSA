#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor(optional)(use directly delete temp(safe)) it will delete whole list ahead of current object so set next = null before using it)
    ~node(){
        int data = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout << "memory freed for node with data " <<data <<endl;
    }
    
};
void insertathead(node* &head,node* &tail,int data){
    if(head==NULL){
        node* temp = new node(data);
        temp->next = temp;
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(data);
        temp->next = head;
        head = temp;
        tail->next = head;
    }
}
void insertattail(node* &head,node* &tail,int data){
    if(head==NULL){
        node* temp = new node(data);
        temp->next = temp;
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(data);
        temp->next = head;
        tail->next = temp;
        tail = temp;
    }
}
void insertAtPos(node* &head,node* &tail,int pos,int data){
    if(pos==1){
        insertathead(head,tail,data);
        return;
    }
    int count = 1;
    node* temp = head;
    while(count<pos-1){
        count++;
        temp = temp->next;
    }
    if(temp->next==head){
        insertattail(head,tail,data);
        return;
    }
    node* newnode = new node(data);
    newnode->next = temp->next;
    temp->next = newnode; 

}
void deleteAtPos(node* &head,node* &tail,int pos){
    if(pos==1){
        //single node
        if(head->next==head){
            node* temp = head;
            head = NULL;
            tail = NULL;
            delete temp;
            return;
        }
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int count = 1;
    node* curr = head;
    node* prev = NULL;
    while(count<pos){
        count++;
        prev = curr;
        curr = curr->next;
    }
    if(curr->next == head){
        tail = prev;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    

}
void traverse(node* head){
    if(head==NULL){
        cout << "empty list " <<endl;
    }
    node* temp = head;
    cout << temp->data << " ";
    temp = temp->next;
    while(temp!=head){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<endl;
}

int main(){
    node* head = NULL;
    node* tail = NULL;
    insertathead(head,tail,1);
    traverse(head);
    insertattail(head,tail,2);
    traverse(head);
    insertattail(head,tail,3);
    traverse(head);
    deleteAtPos(head,tail,3);
    traverse(head);
    // insertattail(head,tail,3);
    // traverse(head);
    // insertAtPos(head,tail,1,4);
    // traverse(head);
    // insertAtPos(head,tail,5,5);
    // traverse(head);
    // insertAtPos(head,tail,6,6);
    // traverse(head);
    // insertAtPos(head,tail,3,6);
    // traverse(head);
    // deleteAtPos(head,tail,7);
    // traverse(head);
    // deleteAtPos(head,tail,1);
    // traverse(head);
    // deleteAtPos(head,tail,4);
    // traverse(head);
    // insertAtPos(head,tail,5,7);
    // traverse(head);
    // insertAtPos(head,tail,1,8);
    // traverse(head);
    cout << head->data <<endl;
    cout << tail->data <<endl;
    // traverse(head);
    // insertatbeg(head,tail,2);
    // traverse(head);
    // insertatbeg(head,tail,3);
    // traverse(head);
   
    // node A;
    // node B;
    // node C;
    // A.next = &B;
    // B.next = &C;
    // C.next = NULL;
    // A.data = 1;
    // B.data = 2;
    // C.data = 3;
    // cout << A.data <<endl;
    // cout << B.data <<endl;
    // cout << C.data <<endl;
}