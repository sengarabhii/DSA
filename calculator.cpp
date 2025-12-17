#include<iostream>
using namespace std;
int main(){
    while(1){
    char op;
    int num1, num2;
    cout << "Enter a number :";
    cin >> num1;
    cout << "Enter other number :";
    cin >> num2;
    cout << "Enter operator + - * /";
    cin >> op;
        switch(op){
        case '+':
            cout << num1+num2 ;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            cout << "Invalid operator";
        cout << "enter 0 for exit :";
        int option;
        cin >> option;
        if(option==0){
            break;
        }
    }
    }

}