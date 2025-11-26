#include<iostream>
using namespace std;
void update(int n){
    n++;
}
void update2(int& n){
    n++;
}
// return by reference is bad practice warning will be generated, also returning pointer is same because the thing they are pointing will have no scope outside of this funciton
int& update3(int n){
    int& num = n;
    return num;
}
int main(){
    /*
    int a = 5;
    int& b = a;
    cout << "value of a is " << a <<endl;
    a++;
    cout << "value of a is " << a <<endl;
    b++;
    cout << "value of b is " << a <<endl;
    cout << "value of b is " << b <<endl;
    */
   int a = 5;
   cout << "before " << a <<endl;
   update(a);
   cout << "after " << a <<endl;
   update2(a);
   cout << "now after " << a <<endl;

   
    
}