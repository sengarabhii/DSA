#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};


struct node* head = NULL;


struct node* createNode(int value){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
};


void insertatbeg(int value){
    struct node* newNode = createNode(value);
    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}


void insertatend(int value){
    struct node* newNode = createNode(value);
    if(head == NULL){
        head = newNode;
    }
    else{
        struct node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        newNode->next = NULL;
        newNode->prev = temp;
        temp->next = newNode;
    }
}


void insertatpos(int value, int pos){
    if(pos == 1){
        insertatbeg(value);
        return;
    }
    struct node* newNode = createNode(value);
    struct node* temp = head; 
    for(int i = 1 ; i < pos && temp!=NULL; i++){
        temp = temp->next;
    }
    if(temp==NULL){
        cout << "Position is out of the bound!!! so node is inserted at the end .." ;
        insertatend(value);
        return ;
    }
    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev = newNode;
    temp=newNode->prev;
    temp->next=newNode;
    return ;

}


void printlistforward(struct node* head){
    struct node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout <<endl <<endl ;
    return ;
   
}


void printlistbackward(struct node* head){
    struct node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    while(temp!=head){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << temp->data ;
    cout << endl <<endl;
    return ;
    
}


void deleteatbeg(){
    struct node* temp = head ;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    return ;
}


void deleteatend(){
    struct node* temp = head ;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    temp->prev = NULL;
    cout <<endl <<endl;
    return ;
}


int main(){
    int value;
    int choice;
    while(1){
        cout << "<|> Menu <|>" <<endl;
        cout << "1-> Enter value at beginning " <<endl;
        cout << "2-> Enter value at end " <<endl;
        cout << "3-> Enter value at particular position " <<endl;
        cout << "4-> Print list in forward direction " <<endl;
        cout << "5-> Print list in backward direction " <<endl;
        cout << "6-> Creating whole list " <<endl;
        cout << "7-> Delete element at beginning " <<endl;
        cout << "8-> Delete element at end " <<endl;
        cout << "9-> Delete element at particular position " <<endl;
        cout << "0-> Exit" <<endl;
        cout << "Enter your choice : " ;
        cin >> choice;
        switch(choice){
            case 0:
                exit;
            case 1:
                // int value;
                cout << "Enter value you want to enter at beginning : " ;
                cin >> value;
                insertatbeg(value);
                break;
            case 2:
                // int value;
                cout << "Enter value you want to enter at end : " ;
                cin >> value;
                insertatend(value);
                break;
            case 3:
                // int value,pos;
                int pos;
                cout << "Enter value and position at which you want to enter : " ;
                cin >> value >> pos ;
                insertatpos(value,pos);
                break;
            case 4: 
                printlistforward(head);
                cout <<endl;
                break;
            case 5:
                printlistbackward(head);
                cout <<endl;
                break;
            case 6:
                // int size,value;
                int size;
                cout << "Enter no. of element you want to enter : ";
                cin >> size ;
                cout << "Enter " << size << " values : " ;
                for(int i = 1 ; i <= size ; i++){
                    cin >> value;
                    insertatend(value);
                }
                break;
            case 7:
                if(head == NULL){
                    cout << "No element present in the list : " ;
                    break;
                }
                deleteatbeg();
                cout << "Element deleted successfully " <<endl;
                break;
            case 8:
                if(head == NULL){
                    cout << "No element present in the list : " ;
                    break;
                }
                deleteatend();
                cout << "Element deleted successfully " <<endl;
                break;

        }
    }
}