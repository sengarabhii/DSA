#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number";
    cin >> n;
    int sum=0,i=2;
    while(i<=n){
        sum+=i;
        i=i+2;
    }
    cout << "sum is" << sum;
}