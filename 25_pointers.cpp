#include<iostream>
using namespace std;
int main(){
    int a = 5;
    char ch = 'c';
    double d = 2.33;
    int *ptr = &a;
    char *ptr2 = &ch;
    double *ptr3 = &d;
    cout << "Address of a is " <<ptr <<endl;
    ptr++;
    cout << "now ptr is " << ptr <<endl;
    cout << "Address of ch is " <<ptr2 <<endl;
    cout << "Address of d is " <<ptr3 <<endl;
    cout << "Value of a is " << *ptr <<endl;
    cout << "Value of ch is " << *ptr2 <<endl;
    cout << "Value of d is " << *ptr3 <<endl;
    cout << "size of ptr is " << sizeof(ptr) <<endl;
    cout << "size of ptr2 is " << sizeof(ptr2) <<endl;
    cout << "size of ptr3 is " << sizeof(ptr3) <<endl;
    int *p = ptr;
    cout << "Address of a is " << p <<endl;
    cout << "value of a is " << *p <<endl;
    int **ptrp = &ptr;
    int ***ptrpp = &ptrp;
    cout << "value of a is " << ***ptrpp <<endl; 
    cout <<endl <<endl;
    int e = 1;
    int f = e;
    e++;
    cout << "value of e : " << e <<endl;
    cout << "value of f : " << f <<endl;
    int *pp = &e;
    int g = *pp;
    cout << "value of g is " << g <<endl;
    //*pp++; does not work like this
    (*pp)++;
    cout << "value of e is " <<e <<endl;
    cout << "now value of g is " << g <<endl; // value will not change as it copied value of *pp

}