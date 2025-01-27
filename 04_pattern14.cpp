// A B C D E
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows:";
    cin >> n;
    char ch;
    /*for(int i=1;i<=n;i++){
        ch='A'+i-1;
        for(int j=1;j<=n;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }*/
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        char ch='A'+i+j-2;
        cout << ch << " ";
    }
    cout << endl;
   }
}