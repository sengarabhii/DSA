// 12345
//  2345
//   345
//    45
//     5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows:";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i-1;k++){
            cout << " ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout << j+i-1;
        }
        cout << endl;
    }
}