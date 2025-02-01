#include<iostream>
using namespace std;
int fibo(int n){
    int f=0,s=1,t,i=1;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        while(i<=n-2)
        {
            t=f+s;
            f=s;
            s=t;
            i++;
        }
        return t;
    }
    
}
int main(){
    int n;
    cout << "Enter nth term:";
    cin >> n;
    int term=fibo(n);
    cout << n << "th term of fibonacci is " << term ;
    
}