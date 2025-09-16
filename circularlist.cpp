#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Node* Head = NULL;
struct Node* createNode(int val){
    struct Node* NewNode = (struct Node*) malloc(sizeof(struct Node));
    NewNode->data = val;
    NewNode->next = NULL;
    return NewNode;
}
void insertatBeg(int value){
    struct Node* NewNode = createNode(value);
    NewNode->next = Head;
    Head = NewNode;
}
void insertatEnd(int value){
    struct Node* NewNode = createNode(value);
    if(Head == NULL){
        Head = NewNode;
    }
    struct Node* temp = Head;
    while(temp->nex=Head){
        temp = temp->next;
    }
    temp->next = NewNode;
    NewNode->next = Head;
    return;
}
void insertatPos(int value,int pos){
    struct Node* NewNode = createNode(value);
    struct Node* temp = Head;
    for(int i = 0 ; i < pos && temp != NULL; i++ ){
        temp = temp->next;
    }
    if(temp->next == Head){
        cout << "Position out of bound";
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
    
}
void print(){
    struct Node *temp=Head;
    while(temp->next!=Head){
        cout<< temp->data;
        temp=temp->next;
    }

}
int main(){
    // struct Node* t = createNode(55);
    insertatEnd(1);
    insertatEnd(2);
    insertatEnd(3);
    insertatEnd(4);
    insertatEnd(5);
    print();

}