#include<bits/stdc++.h>
using namespace std;
class Solution {
//using memoization
int solve(vector<int> &nums,vector<int> &dp,int i){
    if(i>=nums.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    //rob current house
    int op1 = nums[i] + solve(nums,dp,i+2);
    //leave current house
    int op2 = solve(nums,dp,i+1);
    dp[i] = max(op1,op2);
    return dp[i];
}
//using tabulation
int solve2(vector<int> &nums){
    int n = nums.size();
    if(n==1) return nums[0];
    vector<int> dp(n,-1);
    dp[0] = nums[0];
    dp[1] = max(nums[1],nums[0]);
    for(int i = 2 ; i < n ; i++){
        int inc = nums[i] + dp[i-2];
        int exc = dp[i-1];
        dp[i] = max(inc,exc);
    }
    return dp[n-1];
}
//space optimization
int solve3(vector<int> &nums){
    int n = nums.size();
    if(n==1) return nums[0];
    int prev2 = nums[0];
    int prev1 = max(nums[1],nums[0]);
    for(int i = 2 ; i < n ; i++){
        int inc = nums[i] + prev2;
        int exc = prev1;
        int curr = max(inc,exc);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
public:
    int rob(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> dp(n+1,-1);
        // return solve(nums,dp,0);
        //return solve2(nums);
        return solve3(nums);
    }
};