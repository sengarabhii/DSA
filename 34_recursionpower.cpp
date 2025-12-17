#include<iostream>
using namespace std;
int pow(int a,int b){
    //base call
    if(b==0) return 1;
    if(b==1) return a;
    //recursive call
    int ans = pow(a,b/2);
    if(b&1){ //odd
        return a*ans*ans; 
    }
    else{
        return ans*ans;
    }
}
int main(){
    int a,b;
    cout << "Enter a and b (a^b) : ";
    cin >> a >> b;
    cout << pow(a,b);
}