#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int data = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout << "memory freed for node with value " << data <<endl;
    }
};
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPos(Node* &head,Node* &tail,int pos,int data){
    if(pos==1){
        insertAtHead(head,tail,data);
        return;
    }
    int count = 1;
    Node* curr = head;
    while(count<pos-1){
        count++;
        curr = curr->next;
    }
    if(curr->next==NULL){
        insertAtTail(head,tail,data);
        return;
    }
    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next->prev = temp;
    temp->prev = curr;
    curr->next = temp;
}
void deleteAtPos(Node* &head,Node* &tail,int pos){
    //deletion at head
    if(pos==1){ 
        if(head->next==NULL){
            Node* temp = head;
            delete temp;
            head = NULL;
            temp = NULL;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    int count = 1;
    Node* curr = head;
    Node* prv = NULL;
    while(count<pos){
        count++;
        prv = curr;
        curr = curr->next;
    }
    //deletion at tail
    if(curr->next==NULL){
        tail->prev = NULL;
        prv->next = NULL;
        tail = prv;
        delete curr;
        return;
    }
    curr->next->prev = prv;
    prv->next = curr->next;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
    // Node* nxt = curr->next;
    // prv->next = curr->next;
    // nxt->prev = curr->prev;
    // curr->next = NULL;
    // curr->prev = NULL;
    // delete curr;
}
void traverseforward(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<endl;
}
void traversebackward(Node* tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout <<endl;
}
void getlength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    traverseforward(head);
    insertAtPos(head,tail,1,2);
    traverseforward(head);
    insertAtPos(head,tail,1,9);
    traverseforward(head);
    insertAtPos(head,tail,2,4);
    traverseforward(head);
    insertAtPos(head,tail,3,3);
    traverseforward(head);
    insertAtPos(head,tail,5,5);
    traverseforward(head);
    traversebackward(tail);

    deleteAtPos(head,tail,1);
    traverseforward(head); 
    deleteAtPos(head,tail,1);
    traverseforward(head);
    deleteAtPos(head,tail,2);
    traverseforward(head);
}