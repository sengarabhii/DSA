#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number:";
    cin >> num;
    int i=2;
    int flag=0;
    while(i<num){
        if(num%i==0){
            flag=1;
            cout << num << " is not prime number";
            break;
        }
        i++;

    }
    if(flag==0){
        cout << num << " is a prime number";
    }
}