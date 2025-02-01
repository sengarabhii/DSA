#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    int ncr=num/deno;
    return ncr;
}
int main(){
    int n,r;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter r:";
    cin >> r;
    int ans=ncr(n,r);
    cout << "ncr is " <<  ans;
    // int mul=1,fact=1;
    // for(int i=1;i<=r;i++){
    //     mul=mul*n;
    //     n--;
    //     fact=fact*i;
    // }
    // cout << "ncr is:" << mul/fact;

}