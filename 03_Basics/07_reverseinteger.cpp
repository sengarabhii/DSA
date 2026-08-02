#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a integer:";
    cin >> n;
    int digit,rev=0;
    while(n!=0){
        if(rev>INT_MAX/10 || rev<INT_MIN/10){
            printf("rev int is going to be greater than int range...");
            exit(0);
        }
        digit = n % 10;
        rev = rev*10 + digit;
        n=n/10; 
    }
    cout << "Reverse of the given integer is " << rev;
}