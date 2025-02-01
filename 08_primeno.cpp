#include<iostream>
using namespace std;
bool isprime(int n){
    if(n==1){
        cout << "1 is not a prime no.";
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cout << "Enter a number:";
    cin >> num;
    bool result=isprime(num);
    if(result==0){
        cout << num << " is not prime no.";
    }
    else{
        cout << num << " is prime no.";
    }
    return 0;
}