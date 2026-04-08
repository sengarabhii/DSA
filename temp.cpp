#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> nums(n+1);
    for(int i = 1 ; i <= n ; i++){
        cin >> nums[i];
    }
    int ind;
    cin >> ind;
    int x = nums[ind];
    int i = ind;
    int j = ind;
    int comp = nums[ind];
    int count = 0;
    while(i>0 && j<=n){
        while(i>0 && nums[i]==comp){
            i--;
        }
        while(j<=n && nums[j]==comp){
            j++;
        }
        if((i>0 && j<=n) && (nums[i]!=comp || nums[j]!=comp)){
            count++;
            comp = !comp;
        }
        i--;
        j++;
    }
    while(i>0){
        if(nums[i]!=comp){
            comp = !comp;
            count++;
        }
        i--;
    }
    while(j<=n){
        if(nums[j]!=comp){
            comp = !comp;
            count++;
        }
        j++;
    }
    if(comp!=x){
        count++;
    }
    cout << count <<endl;
}
int main(){
    int t;
    cin >> t;
    while(t){
        solve();
        t--;
    }
}