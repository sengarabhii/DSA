#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s = "Abhishek";
    stack<char> st;
    for(int i = 0 ; i < s.length() ; i++){
        st.push(s[i]);
    }
    for(int i = 0 ; i < s.length() ; i++){
        s[i] = st.top();
        st.pop();
    }
    cout << s <<endl;
}