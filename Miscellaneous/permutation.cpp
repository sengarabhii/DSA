#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    void solve(vector<int> arr,int i ,vector<vector<int>> &ans,int n){
        if(i>=n){
            ans.push_back(arr);
            return;
        }
        //swapping each element with every element
        for(int j = i ; j < n ; j++){
            swap(arr[j],arr[i]);
            solve(arr,i+1,ans,n);
            //backtracing
            swap(arr[j],arr[i]);
        }
    }
    int main() {
        int n = 3;
        int k = 5;
        vector<vector<int>> ans;
        vector<int> arr;
        for(int i = 1 ; i <= n ; i++){
            arr.push_back(i);
        }
        int i = 0;
        solve(arr,i,ans,n);
        sort(ans.begin(),ans.end());
        string res;
        for(int i = 0 ; i < n ; i++){
            char ch = ans[k-1][i] + '0';
            res.push_back(ch);
        }
        cout << res;
        
    }
