#include<iostream>
using namespace std;
string replaceSpaces(string &str){
	string s;
	for(int i = 0 ; i < str.length() ; i++){
		if(str[i] == ' '){
			s.push_back('@');
			s.push_back('4');
			s.push_back('0');
		}
		else{
			s.push_back(str[i]);
		}
	
	}
	return s;
}
string replacespaces(string &str){
    int i = 0 ;
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] == ' '){
            str.push_back(' ');
            str.push_back(' ');
            int j = str.length() - 1 ;
            while(i<(j-2)){
                str[j] = str[j-2];
                j--;
            }
            str[i] = '@' ;
            str[i+1] = '4' ;
            str[i+2] = '0' ;
            i+=2;
        }
    }
    return str;
}
int main(){
    // string str = "My   Name is Abhishek   Sengar";
    string str = " ";
    // cout << replaceSpaces(str);
    cout << replacespaces(str);
}