#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of terms";
    cin >> n;
    int f=0,s=1,t;
    cout << f <<"\t" << s;
    for(int i=1;i<=n-2;i++){
        t=f+s;
        cout << "\t" << t;
        f=s;
        s=t;
    }
}