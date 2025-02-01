#include<iostream>
using namespace std;
int setbitscount(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "No. of set bits in " << n << " is " << setbitscount(n);
    
}