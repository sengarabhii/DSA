#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string result;
    result.push_back(s[0]);
    bool flag = true;
    for(int i = 1 ; i < n-1 ; i++){
        if(flag && s[i]!=s[i+1] && s[i]!=s[i-1]){
            flag = false;
            continue;
        }
        result.push_back(s[i]);
    }
    result.push_back(s[n-1]);
    string ans;
    int i = 0;
    // int j = 0;
    int cnt = 0;
    while(i<result.size()){
        while(i+1<result.size() && result[i]==result[i+1]){
            i++;
        }
        cnt++;
        i++;
    }
    // ans.push_back(result[j]);
    cout << cnt <<endl;
}
int main(){
    int t;
    cin >> t;
    while(t){
        solve();
        t--;
    }
}