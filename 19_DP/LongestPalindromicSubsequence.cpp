#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(string &s,vector<vector<int>> &dp,int i,int j){
        if(i==j) return 1;
        else if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j]){
            dp[i][j] = 2 + solve(s,dp,i+1,j-1);
            return dp[i][j];
        }
        else{
            int op1 = solve(s,dp,i+1,j);
            int op2 = solve(s,dp,i,j-1);
            dp[i][j] = max(op1,op2);
            return dp[i][j];
        }
    }
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        int i = 0;
        int j = n-1;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(s,dp,i,j);
    }
    //m(2) this problem is basically longest common subsequence(LCS) b/w string and its reverse
};