#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows:";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}