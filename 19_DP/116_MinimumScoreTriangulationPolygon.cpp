#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //using recursion + Memoization
    int solveMem(vector<int> &values,vector<vector<int>> &dp,int i,int j){
        if(j-i==1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans = INT_MAX;
        for(int k = i+1 ; k < j ; k++){
            int curr = values[i]*values[j]*values[k] + solveMem(values,dp,i,k) + solveMem(values,dp,k,j);
            ans = min(ans,curr);
        }
        dp[i][j] = ans;
        return ans;
    }

    //using Tabulation
    int solveTab(vector<int> &values){
        int n = values.size();
        vector<vector<int>> dp(n,vector<int>(n,0));

        for(int i = n-1 ; i >= 0 ; i--){
            for(int j = i+2 ; j < n ; j++){
                int ans = INT_MAX;
                for(int k = i+1 ; k < j ; k++){
                    int curr = values[i]*values[j]*values[k] + dp[i][k] + dp[k][j];
                    ans = min(ans,curr);
                }
                dp[i][j] = ans;
            }
        }
        return dp[0][n-1];
    }
    
    int minScoreTriangulation(vector<int>& values) {
        // int n = values.size();
        // vector<vector<int>> dp(n,vector<int>(n,-1));
        // return solveMem(values,dp,0,n-1);

        return solveTab(values);

    }
};