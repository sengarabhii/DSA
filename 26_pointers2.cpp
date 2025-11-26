#include<iostream>
using namespace std;
void update(int *p){
    p = p + 1;
    cout << "Inside add: " << p <<endl;
}
void update2(int *p){
    *p = *p+1;
}
int main(){
    /*
    char ch[6] = "Nikhi";
    cout << ch <<endl;
    char *ch2 = &ch[0];
    // here cout behave differently in case of char array, it will print whole array till \0
    cout << ch2 <<endl;
    // guess what will happen if we didn't give \0
    char c = 'A';
    char *ch3 = &c;
    cout << ch3 <<endl;
    // now it will print unguessed value after printing c bcz it'll print till it doesn't encouter null character 
    */
//    int a = 5;
//    int *ptr = &a;
//    cout << "Before add : " <<ptr <<endl;
//    cout << "Before value : " << *ptr <<endl;
//    update(ptr);
//    update2(ptr);
//    cout << "After add : " <<ptr <<endl;
//    cout << "After value : " <<*ptr <<endl;
int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;
}