#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows:";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            if((i+j)%2==0){
                cout << "A";
            }
            else{
                cout << "B";
            }
        }
        cout << endl;
    }
}