#include<iostream>
using namespace std;
bool palindrome(string &str  ,int s ,int e){
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    else{
        return palindrome(str,s+1,e-1);
    }
}
int main(){
    string str = "lol";
    int s = 0 ;
    int e = str.length()-1;
    cout << "is palidrome :" << palindrome(str,s,e);
}