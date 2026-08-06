#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  //using recursion + memoization
    int solve(vector<int> &dp,int n){
        if(n<=1) return 0;
        else if(n==2) return 1;
        if(dp[n]!=-1) return dp[n];
        dp[n] = (n-1)*(solve(dp,n-2) + solve(dp,n-1));
        return dp[n];
    }
    //using tabulation
    int solve2(int n){
        vector<int> dp(n+1,-1);
        dp[0] = dp[1] = 0;
        dp[2] = 1;
        for(int i = 3 ;i <= n ; i++){
            dp[i] = (i-1)*(dp[i-2]+dp[i-1]);
        }
        return dp[n];
    }
    //space optimization
    int solve3(int n){
        if(n==1) return 0;
        int prev1 = 1,prev2 = 0;
        for(int i = 3 ;i <= n ; i++){
            int curr = (i-1)*(prev2 + prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
    int derangeCount(int n) {
        // vector<int> dp(n+1,-1);
        // return solve(dp,n);
        // return solve2(n);
        return solve3(n);
        
    }
};