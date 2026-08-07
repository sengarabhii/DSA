#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  //memoization
    int solve(vector<int> &dp,int n,int k){
        if(n==1){
            return k;
        }
        else if(n==2){
            return k*k;
        }
        if(dp[n]!=-1) return dp[n];
        //last two of same color
        int op1 = solve(dp,n-2,k)*(k-1);
        //last two of different colour
        int op2 = solve(dp,n-1,k)*(k-1);
        dp[n] = op1 + op2;
        return dp[n];
    }
    //tabulation
    int solve2(int n,int k){
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        dp[1] = k;
        dp[2] = k*k;
        for(int i = 3 ; i <= n ; i++){
            dp[n] = (k-1)*(dp[n-1] + dp[n-2]);
        }
        return dp[n];
    }
    //space optimization
    int solve3(int n,int k){
        if(n==1) return k;
        int prev2 = k;
        int prev1 = k*k;
        for(int i = 3 ; i <= n ; i++){
            int curr = (k-1)*(prev1 + prev2);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
    //space optimization
    int countWays(int n, int k) {
        // vector<int> dp(n+1,-1);
        // return solve(dp,n,k);
        // return solve2(n,k);
        return solve3(n,k);
    }
};