#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter rows:";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int l=1;l<=i-1;l++){
            cout << i-l;
        }
        cout << endl;
    }
}