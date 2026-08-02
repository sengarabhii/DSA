#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL ;
struct node* createnode(int value){
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
struct node* insertatbeg(int value){
    struct node* newnode = createnode(value);
    newnode->data = value;
    newnode->next = head;    
    head = newnode;

}
struct node* insertatend(int value){
    struct node* newnode = createnode(value);
    struct node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;

}
int main(){

}