#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"}; 
    print(n/10);
    cout << arr[n%10] << " ";
}
int main(){
    print(1225678934);
}