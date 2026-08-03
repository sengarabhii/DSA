#include<bits/stdc++.h>
using namespace std;

class Solution {
//top down approach
//recursion + memoization
int solve(vector<int> &coins,int amount,vector<int> &dp){
    if(amount<0) return -1;
    else if(amount==0) return 0;
    if(dp[amount]!=-2) return dp[amount];
    int ans = INT_MAX;
    for(int i = 0 ; i < coins.size() ; i++){
        int curr = solve(coins,amount-coins[i],dp);
        if(curr==-1) continue;
        ans = min(ans,curr);
    }
    if(ans==INT_MAX) dp[amount] = -1;
    else dp[amount] = 1+ans;
    return dp[amount];
}
//top down approach
//using tabulation 
int solve2(vector<int> &coins,int amount){
    vector<int> dp(amount+1,INT_MAX);
    dp[0] = 0;
    for(int i = 1 ; i < amount+1 ; i++){
        int mini = INT_MAX;
        for(int j = 0 ; j < coins.size() ; j++){
            if(i-coins[j]>=0 && dp[i-coins[j]]!=INT_MAX){
                mini = min(mini,1+dp[i-coins[j]]);
            }
        }
        dp[i] = mini;
    }
    return dp[amount];
}
public:
    int coinChange(vector<int>& coins, int amount) {
        //M->1
        // vector<int> dp(amount+1,-2);
        // return solve(coins,amount,dp);
        
        int ans = solve2(coins,amount);
        if(ans==INT_MAX) return -1;
        return ans;
    }
};

//here we cannot optimize space because at ith index we can have its answer depends on i-jth position before according to j value coin