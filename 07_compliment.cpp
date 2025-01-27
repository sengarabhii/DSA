#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a = 15678;
    int b = 0;
    int i = 0;
    while(a!=0){
        if((a&1)==0){
            
            b = b + 1*pow(10,i);
        }
        i++;
        a = a>>1;
    }
    cout << b ;
    
}