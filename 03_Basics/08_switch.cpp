#include<iostream>
using namespace std;
int main(){
    int n,num=1;
    cout << "Enter a no.:";
    cin >> n;
    switch(n){
    case 1:
     cout << "One";
     break;
    case 2:
     cout << "Two";
     break;
    case 3:
     switch(num){
        case 1: cout <<"thireeeee";
        break;
        default:
        cout << "three";
     }
    default:
    cout << "greater than 3";
    }
}