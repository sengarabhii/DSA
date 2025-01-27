#include<iostream>
using namespace std;
int main(){
    /*int n;
    cout << "Enter number till which you want to print number";
    cin >> n;
    int i=1;
    while(i<=n){
        cout << i <<endl;
        i++;
    }*/
//    for calculate sum of numbers upto n
   int n;
   cout << "Enter number till which you want to sum:";
   cin >> n;
   int sum = 0;
   /*while(n>0){
    sum=sum+n;
    n--;
   }
   cout << "Sum is " << sum;
   */ 
  int i=1;
  while(1){
    sum+=i;
    i++;
  }
  cout << "Sum is " << sum;
}