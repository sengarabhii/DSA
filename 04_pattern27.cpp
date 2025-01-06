#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter rows:";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j;
        }
        for(int k=1;k<=2*i-2;k++){
            cout << "*";
        }
        for(int l=1;l<=n-i+1;l++){
            cout << n-i+1;
        }
        cout << endl;
    }
}