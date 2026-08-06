#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    if(n>=2 && arr[n-2]>arr[n-1]){
        cout << -1 <<endl;
        return;
    }
    vector<vector<long long>> ans;
    for(int i = n-3 ; i >= 0 ; i--){
        if(arr[i]>arr[i+1]){
            ans.push_back({i,i+1,n-1});
            arr[i] = arr[i+1] - arr[n-1];
        }
    }
    cout << ans.size() <<endl;
    for(auto row : ans){
        for(auto i : row){
            cout << i+1 << " ";
        }
        cout <<endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t){
        solve();
        t--;

    }
}