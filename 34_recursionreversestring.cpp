#include<iostream>
using namespace std;
string rev(string &str  ,int s){
    if(s>=str.length()/2){
        return str;
    }
    swap(str[s++],str[str.length()-1-s]);
    return rev(str,s);
}
int main(){
    string str = "Abhishek";
    int s = 0 ;
    cout << "reverse string :" << rev(str,s);
}