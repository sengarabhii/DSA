#include<bits/stdc++.h>
using namespace std;
class Solution {
//using memoization
int solve(vector<int> &nums,int target,vector<int> &dp){
    if(target==0) return 1;
    else if(target<0) return 0;
    if(dp[target]!=-1) return dp[target];
    int ans = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        ans += solve(nums,target-nums[i],dp);
    }
    dp[target] = ans;
    return dp[target];
}
//using Tabulation
int solveTab(vector<int> &nums,int target){
    vector<int> dp(target+1,0);
    dp[0] = 1;
    for(int t = 1 ; t <= target ; t++){
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(t-nums[i]<0) continue;
            cnt += dp[t-nums[i]];
        }
        dp[t] = cnt;
    }
    return dp[target];
}
public:
    int combinationSum4(vector<int>& nums, int target) {
        // vector<int> dp(target+1,-1);
        // return solve(nums,target,dp);

        return solveTab(nums,target);
    }
};