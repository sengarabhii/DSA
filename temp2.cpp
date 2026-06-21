#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    vector<int> odd;
    vector<int> even;
    vector<int> three;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]%6==0) ans.push_back(arr[i]);
        else if(arr[i]%2==0) even.push_back(arr[i]);
        else if(arr[i]%3==0) three.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    for(int i = 0 ; i < even.size() ; i++){
        cout << even[i] << " ";
    }
    for(int i = 0 ; i < odd.size() ; i++){
        cout << odd[i] << " ";
    }
    for(int i = 0 ; i < three.size() ; i++){
        cout << three[i] << " ";
    }
    cout <<endl;
}
int main() {
    int t;
    cin >> t;
    while(t){
        solve();
        t--;
    }
}