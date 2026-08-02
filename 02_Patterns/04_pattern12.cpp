// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows:";
    cin >> n;
    /*char ch;
    for(int i=1;i<=n;i++){
        ch='A';
        for(int j=1;j<=n;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }*/
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        char ch='A'+j-1;
        cout << ch << " ";
    }
    cout << endl;
   }
}