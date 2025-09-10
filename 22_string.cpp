#include<iostream>
#include<string>
using namespace std;
// int main(){
//     string s;
//     cout << "Length of string is " <<s.length() <<endl;
//     s.push_back('s');
//     cout << "Length of string is " <<s.length() <<endl;
//     s.push_back('s');
//     cout << "Length of string is " <<s.length() <<endl;
//     s.push_back('s');
//     cout << "Length of string is " <<s.length() <<endl;
//     s.push_back('s');
//     cout << "Length of string is " <<s.length() <<endl;
//     s.push_back('s');
    
// }
class Solution {
public:
    string reverseWords(string s) {
        int beg = 0;
        int n = s.length()-1;
        for(int end = 0 ; end <= n ; end++){
            if(s[end] == ' ' || end == n){
                int i = beg;
                int j = (end == n)? end : end-1;
                while(i < j){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                beg = end+1;
            }
        }
        return s;
    }
};





class Solution {
private:
    void remove_trailing(string &st){
        int i = st.length() - 1 ;
        while(i >= 0 && st[i]==' '){
            st.pop_back();
            i--;
        }
    }
    void remove_leading_reversing(string &st){
        int i = 0 ;
        int j = st.length() - 1 ;
        while(i<j){
            swap(st[i++],st[j--]);
        }
        remove_trailing(st);
        // i = 0 ;
        // j = st.length() - 1;
        // while(i<j){
        //     swap(st[i++],st[j--]);
        // }
    }
    void reversewords(string &st) {
        int beg = 0;
        int n = st.length()-1;
        for(int end = 0 ; end <= n ; end++){
            if(st[end] == ' ' || end == n){
                int i = beg;
                int j = (end == n)? end : end-1;
                while(i < j){
                    swap(st[i],st[j]);
                    i++;
                    j--;
                }
                beg = end+1;
            }
        }
    }
public:
    string reverseWords(string s) {
        //removing trailing whitespaces
        remove_trailing(s);
        //removing leading whitespaces and reversing
        remove_leading_reversing(s);
        reversewords(s);
        return s;
    }
};