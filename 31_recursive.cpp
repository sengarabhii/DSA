#include<iostream>
using namespace std;
int pow(int n){
    if(n==0){
        return 1;
    }
    return 2*pow(n-1);
}
int main(){
    int num;
    cout << "Enter power : " ;
    cin >> num;
    cout << pow(num);
}