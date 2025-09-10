#include<iostream>
#include<string>
using namespace std;
void remove_trailing(string &st){
    int i = st.length() - 1 ;
    while(i >= 0 && st[i]==' '){
        st.pop_back();
        i--;
    }
}
void remove_leading(string &st){
    int i = 0 ;
    int n = st.length() - 1 ;
    while(i <= n && st[i] == ' '){
        //shifting
        int j = 0;
        while(j < n){
            st[j] = st[j+1];
            j++;
        }
        st.pop_back();
    }
}
void remove_leadingm2(string &st){
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
void remove_extra_spaces(string &st){
    int i = 0 , j = 0;
    int n = st.size()-1;
    while(j<=n){
        //skipping space
        // while(j < n && st[j] == ' '){
        //     j++;
        // }
        //now copying character according
        while(j <= n && st[j] != ' '){
            st[i] = st[j];
            i++;
            j++;
        }
        if(j != n){
            st[i++] = ' ';
        }
        //skipping space
        while(j <= n && st[j] == ' '){
            j++;
        }
        
    }
    i--;
    while(i<=n){
        st.pop_back();
        i++;
    }
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
int main(){
    string s = "    a     good     example    of    boy     ";
    cout << "Input : " <<endl;
    cout << s <<endl;
    remove_trailing(s);
    remove_leadingm2(s);
    remove_extra_spaces(s);
    // reversewords(s);
    cout << "output : " <<endl;
    cout << s ;

}