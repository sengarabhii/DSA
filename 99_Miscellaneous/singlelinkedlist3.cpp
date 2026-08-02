#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
// struct node* createNode(int value){
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data = value;
//     newNode->next = NULL;
//     return newNode;
// }
int main(){
    struct node* a = (struct node*)malloc(sizeof(struct node));
    a->data = 5;
    struct node* b = (struct node*)malloc(sizeof(struct node));
    b->data = 6;
    struct node* c = (struct node*)malloc(sizeof(struct node));
    c->data = 7;
    struct node* d = (struct node*)malloc(sizeof(struct node));
    d->data = 8;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    head = a;
    struct node* temp = head;
    while(temp!=NULL){
        cout << temp->data;
        temp = temp->next;
    }
}