#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int solve(int n,vector<int> &dp,int x, int y,int z){
        if(n==0) return 0;
        else if(n<0) return INT_MIN;
        if(dp[n]!=-1) return dp[n];
        int op1 = solve(n-x,dp,x,y,z);
        int op2 = solve(n-y,dp,x,y,z);
        int op3 = solve(n-z,dp,x,y,z);
        int ans = max({op1,op2,op3});
        if(ans!=INT_MIN) dp[n] = 1+ans;
        else dp[n] = ans;
        return dp[n];
    }
    //tabulation
    int solve2(int n,int x,int y,int z){
        vector<int> dp(n+1,INT_MIN);
        dp[0] = 0;
        for(int i = 1 ; i <= n ; i++){
            if(i-x>=0) dp[i] = max(dp[i],1+dp[i-x]);
            if(i-y>=0) dp[i] = max(dp[i],1+dp[i-y]);
            if(i-z>=0) dp[i] = max(dp[i],1+dp[i-z]);
        }
        return dp[n];
    }
    int maximizeCuts(int n, int x, int y, int z) {
        // vector<int> dp(n+1,-1);
        // int ans = solve(n,dp,x,y,z);
        int ans = solve2(n,x,y,z);
        if(ans<0) return 0;
        return ans;
    }
};