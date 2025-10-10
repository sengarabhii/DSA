#include<iostream>
using namespace std;
int main(){
    int value;
    int choice;
    while(1){
        cout << "<|> Menu <|>" <<endl;
        cout << "1-> Enter value  " <<endl;
        cout << "2-> Print deque in forward direction " <<endl;
        cout << "3-> Creating whole deque " <<endl;
        cout << "4-> Delete element " <<endl;
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
            case 9:
                if(head == NULL){
                    cout << "No element present in the list : " ;
                    break;
                }
                cout << "Enter position of element at which you want to delete in list : ";
                int position;
                cin >> position ;
                deleteatpos(position);
                cout << "Element deleted successfully " <<endl;
                break;

        }
}