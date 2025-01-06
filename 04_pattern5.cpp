#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of rows";
    cin >> n;
    int i=1;
    int c=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << c <<" ";
            c++;
            j++;
        }
        i++;
        cout <<endl;
    }
}