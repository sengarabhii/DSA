// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows:";
    cin >> n;
    int c=1;
    /*for(int i=1;i<=n;i++){
        c=i;
        for(int j=1;j<=i;j++){
            cout << c << " ";
            c--;
        }
        cout << endl;
    }*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i-j+1 << " ";
        }
        cout << endl;
    }
}