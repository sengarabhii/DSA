#include<iostream>
using namespace std;
int main()
{
    // int a,b;
    // cout << "Enter value of a and b:";
    // cin >> a >> b;
    // if(a>b){
    //     cout << "A is greater";
    // }
    // else{
    //     cout << "B is greater";
    // }
    // a = cin.get(); 
    // cout << "Value of a is " << a;
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if(ch >= 'a' && ch <='z' )
    {
        cout << "This is lowercase";
    }
    else if(ch >='A' && ch <='Z')
    {
        cout << "This is uppercase";
    }
    else if(ch>='0' && ch<='9'){
        cout << "This is number";
    }
    else{
        cout<< "Other special character";
    }

    
}