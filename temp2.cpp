#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++){
        cin >> nums[i];
    }
    int prev = 0;
    bool flag = false;
    bool issorted = true;
    for(int i = 0 ; i < n ; i++){
        if(nums[i]<prev){
            issorted = false;
        }
        if(i&1 && nums[i]&1) flag = true;
        if(!(i&1) && !(nums[i]&1)) flag = true;
        prev = nums[i];
    }
    if(issorted){
        cout << "YES" <<endl;
        return;
    }
    if(x==y){
        cout << "NO" <<endl;
    }
    if(flag){
        if(!(x&1) && (!(y&1))){
            cout << "NO" <<endl;
            return;
        }
    }
    cout << "YES" <<endl;
}
    
int main() {
    int t;
    cin >> t;
    while(t){
        solve();
        t--;
    }
}