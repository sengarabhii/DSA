#include<iostream>
using namespace std;
string rev(string &str  ,int s ,int e){
    if(s>e){
        return str;
    }
    else{
        char ch = str[s];
        str[s]= str[e];
        str[e] = ch;
        return rev(str,s+1,e-1);
    }
}
int main(){
    string str = "Abhishek";
    int s = 0 ;
    int e = str.length()-1;
    cout << "reverse string :" << rev(str,s,e);
}