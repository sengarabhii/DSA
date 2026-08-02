#include<bits/stdc++.h>
using namespace std;
int binarySrch(vector<long long> &prefixsum,long long &weightage,int target){
    int s = 0;
    int e = prefixsum.size()-1;
    long long midval;
    while(s<=e){
        long long mid = s + (e-s)/2;
        midval = prefixsum[mid] + (mid+1)*weightage;
        if(midval<=target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    return e+1;
}
void solve(){
    int n,x;
    cin >> n >> x;
    vector<long long> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<long long> prefixsum = arr;
    for(int i = 1 ; i < n ; i++){
        prefixsum[i] += prefixsum[i-1];
    }
    long long weightage = 0;
    long long ans = 0;
    
    while(1){
        int curr = binarySrch(prefixsum,weightage,x);
        if(curr==0){
            cout << ans <<endl;
            return;
        }
        ans += curr;
        weightage++;
    }
    cout << ans <<endl;

}
int main(){
    int t;
    cin >> t;
    while(t){
        solve();
        t--;
    }
}