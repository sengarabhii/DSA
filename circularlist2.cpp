#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
int main(){
    struct node* a = (struct node*)malloc(sizeof(struct node));
    struct node* b = (struct node*)malloc(sizeof(struct node));
    struct node* c = (struct node*)malloc(sizeof(struct node));
    head = a;
    a->data = 10;
    a->next = b;
    b->data = 20;
    b->next = c;
    c->data = 30;
    c->next = head;
    tail = c;
    struct node* temp = head;
    while(temp->next!=head){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << temp->data <<endl;
    struct node* d = (struct node*)malloc(sizeof(struct node));
    d->data = 40;
    d->next = head;
    head = d;
    temp = head;
    tail->next = head;
    while(temp->next!=head){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << temp->data;

}