#include <bits/stdc++.h>
using namespace std;
void countPalindromicSubsequence(string s) {
        set<string> ans;
        vector<int> suffix(26,0);
        for(int i = 0 ; i < s.length() ; i++){
            int ch = s[i] - 'a';
            suffix[ch]++;
        }
        vector<int> prefix(26,0);
        for(int i = 0 ; i < s.length() ; i++){
            int ch = s[i] - 'a';
            suffix[ch]--;
            string temp;
            for(int j = 0 ; j < 26 ; j++){
                if(prefix[j]>0 && suffix[j]>0){
                    temp.push_back(prefix[j]+'a');
                    temp.push_back(s[i]);
                    temp.push_back(prefix[j]+'a');
                    ans.insert(temp);
                }
            }
            prefix[ch]++;
        }
        for(auto i : ans){
            cout << i << " ";
        }
    }
int main() {
    string s = "tlpjzdmtwderpkpmgoyrcxttiheassztncqvnfjeyxxp";
	countPalindromicSubsequence(s);
}
