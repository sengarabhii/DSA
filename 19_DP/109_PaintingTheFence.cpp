#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
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
    int countWays(int n, int k) {
        vector<int> dp(n+1,-1);
        return solve(dp,n,k);
    }
};