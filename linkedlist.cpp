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
    struct Node* temp = Head;
    while(temp!=NULL){
        temp = temp->next;
    }
    temp->next = NewNode;
    NewNode->next = NULL;
}
void insertatPos(int value,int pos){
    struct Node* NewNode = createNode(value);
    struct Node* temp = Head;
    for(int i = 0 ; i < pos && temp != NULL; i++ ){
        temp = temp->next;
    }
    if(temp == NULL){
        cout << "Position out of bound";
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
    
}
void print(struct Node* N){
    struct Node *temp=Head;
    while(temp!=NULL)
    {cout<< temp->data;
        temp=temp->next;
    }

}
int main(){
    //struct Node* a = createNode(10);
    //cout << "Value at fist node is " << a->data <<endl;
    cout << "Enter value you want to add at beginning : ";
    int value;
    cin >> value;
    insertatBeg(value);
    print(Head);
    //struct Node* b = a->next;
    //cout << "Now at value at beginning : " << b->data;
    int n;
    cout << "enter no. of elements you want to enter in node";
    cin >> n;
    // for(int i = 0 ; i < n  ; i++){
    //     insertatEnd(int )
    // }
    return 0;
}