#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<vector<char>> mat(n,vector<char>(n));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> mat[i][j];
        }
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int cnt0 = 0,cnt1 =0;
            if(mat[i][j]=='1') cnt1++;
            else cnt0++;
            if(mat[j][n-1-i]=='1') cnt1++;
            else cnt0++;
            if(mat[n-i-1][n-1-j]=='1') cnt1++;
            else cnt0++;
            if(mat[n-1-j][i]=='1') cnt1++;
            else cnt0++;
            ans += min(cnt0,cnt1);
        }
    }
    cout << ans/4 <<endl;
    

}
int main(){
    int t;
    cin >> t;
    while(t){
        solve();
        t--;
    }
}