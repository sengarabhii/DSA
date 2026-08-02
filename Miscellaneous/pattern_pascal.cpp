#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
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
    int n;
    cout << "Enter no. of rows:";
    cin >> n;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            cout << " ";
        }
        for(int k=0;k<=i;k++){
            cout <<ncr(i,k) <<" ";
        }
        cout <<endl;
    } 
}
// int main(){
//     int n;
//     cout << "Enter no. of rows:";
//     cin >> n;
//     for(int i;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout << " ";
//         }
//         int p=1;
//         for(int k=1;k<=i;k++){
//             cout <<p <<" ";
//             p=p*(i-k)/k;
//         }
//         cout <<endl;
//     } 
// }