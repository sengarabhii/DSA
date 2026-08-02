// program to calculate minimum no. of 100,50,20,1 notes required for a amount
#include<iostream>
using namespace std;
int main(){
    // int n =1330;
    int n;
    cout << "Enter a amount:";
    cin >> n; 
    int Rs100,Rs50,Rs20,Rs1;
    switch(1){
        case 1:
            Rs100=n/100;
            n=n%100;
        case 2:
            Rs50=n/50;
            n=n%50;
        case  3:
            Rs20=n/20;
            n=n%20;
        case 4:
            Rs1=n;     
    }
    cout <<"Rs100 notes:" << Rs100 <<endl;
    cout <<"Rs50 notes:" << Rs50 <<endl;
    cout <<"Rs20 notes:" << Rs20 <<endl;
    cout <<"Rs1 notes:"<< Rs1 <<endl;
}