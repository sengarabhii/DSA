#include<iostream>
using namespace std;
void printbwd(int n){
    if(n==0) return ;
    cout << n <<endl;
    printbwd(n-1);
}
void printfwd(int n){
    if(n==0) return ;
    printfwd(n-1);
    cout << n <<endl;
}
int main(){
    // print counting  using recursion
    int n ;
    cout << "Enter number : " ;
    cin >> n;
    printfwd(n);
    cout <<endl <<endl;
    printbwd(n);
}