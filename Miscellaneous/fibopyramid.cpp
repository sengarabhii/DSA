#include<iostream>
using namespace std;
void fibonacci(int n){
    int c,a,b,i;
      a = 0;
      b = 1;
       printf("%d ",0);
       if(n>1){
            printf("%d",1);
       }
       for(i = 0; i<n-2;i++){
            c = a + b;
            printf(" %d ",c);
            a = b;
            b = c;
      }
}
int main(){
      cout << "Enter no. of rows : ";
      int n;
      cin >> n;
      for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n-i ; j++){
                  cout << " ";
            }
            fibonacci(i+1);
            cout <<endl;
      }      
      return 0;
}