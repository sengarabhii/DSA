#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //using memoization
    //top down
    int solveMem(vector<vector<char>>& matrix,vector<vector<int>> &dp,int i,int j,int &maxi){
        if(i>=dp.size() || j>=dp[0].size()) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        else if(matrix[i][j]=='0') return 0;

        int right = solveMem(matrix,dp,i,j+1,maxi);
        int down = solveMem(matrix,dp,i+1,j,maxi);
        int diagonal = solveMem(matrix,dp,i+1,j+1,maxi);

        dp[i][j] = 1 + min({right,down,diagonal});
        maxi = max(maxi,dp[i][j]);
        return dp[i][j];
    }

    //using tabulation
    //bottom up
    int solveTab(vector<vector<char>> &matrix){
        int maxi = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i = m-1 ; i >= 0 ; i--){
            for(int j = n-1 ; j >= 0 ; j--){
                if(matrix[i][j]=='0') continue;
                int right = dp[i][j+1];
                int down = dp[i+1][j];
                int diagonal = dp[i+1][j+1];
                dp[i][j] = 1 + min({right,down,diagonal});
                maxi = max(maxi,dp[i][j]);                
            }
        }
        return maxi*maxi;
    }

    // space optimization
    int solveOpti(vector<vector<char>> &matrix){
        int maxi = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> downrow(n+1,0);
        for(int i = m-1 ; i >= 0 ; i--){
            vector<int> currrow(n+1,0);
            for(int j = n-1 ; j >= 0 ; j--){
                if(matrix[i][j]=='0') continue;
                int right = currrow[j+1];
                int down = downrow[j];
                int diagonal = downrow[j+1];
                currrow[j] = 1 + min({right,down,diagonal});
                maxi = max(maxi,currrow[j]);                
            }
            downrow = currrow;
        }
        return maxi*maxi;
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        // int m = matrix.size();
        // int n = matrix[0].size();
        // vector<vector<int>> dp(m,vector<int>(n,-1));
        // int maxi = 0;
        // solveMem(matrix,dp,0,0,maxi);
        // return maxi*maxi;

        // return solveTab(matrix);

        return solveOpti(matrix);
    }
};