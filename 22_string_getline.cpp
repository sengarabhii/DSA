#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ;
    //for char array use cin.get(str,len) 
    getline(cin,str,';') ;
    // ; is the custom delimeter, string before it will be read
    cout << str <<endl;
}