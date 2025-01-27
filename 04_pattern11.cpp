// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows:";
    cin >> n;
    /*char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }*/
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        char ch='A'+i-1;
        cout << ch << " ";
    }
    cout << endl;
   }
}