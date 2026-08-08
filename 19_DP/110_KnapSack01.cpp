#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  //only recursion
    int solve(int W,vector<int> &val,vector<int> &wt,int i){
        //base case
        if(i==0){
            if(W>wt[0]){
                return 0;
            }
            else{
                return val[0];
            }
        }
        //inclusion
        int include = 0;
        if(W>=wt[i]){
            include = solve(W-wt[i],val,wt,i-1);
        }
        //exclusion
        int exclude = solve(W,val,wt,i-1);
        return max(include,exclude);
        
    }
    
    
    //recursion + Memoization
    //top down approach
    
    int solveMem(int W,vector<int> &val,vector<int> &wt,int i,vector<vector<int>> &dp){
        //base case
        if(i==0){
            if(W<wt[0]){
                return 0;
            }
            else{
                return val[0];
            }
        }
        if(dp[W][i]!=-1) return dp[W][i];
        //inclusion
        int include = 0;
        if(W>=wt[i]){
            include = val[i] + solveMem(W-wt[i],val,wt,i-1,dp);
        }
        //exclusion
        int exclude = solveMem(W,val,wt,i-1,dp);
        dp[W][i] = max(include,exclude);
        return dp[W][i];
        
    }
    
    
    //Using tabulation
    //bottom up approach
    
    int solveTab(int capacity,vector<int> &val,vector<int> &wt,int i){
        int n = val.size();
        vector<vector<int>> dp(n,vector<int>(capacity+1,0));
        //for 0th item i.e. 0th row filling
        //if w<weight[0] => 0
        for(int w = wt[0] ; w <= capacity ; w++){
            if(w >= wt[0]){
                dp[0][w] = val[0];
            }
            else{
                dp[0][w] = 0;//already during intitialization
            }
        }
        
        for(int i = 1 ; i < n ; i++){
            for(int w = 0 ; w <= capacity ; w++){
                //inclusion
                int include = 0;
                if(w>=wt[i]){
                    include = val[i] + dp[i-1][w-wt[i]];
                }
                //exclusion
                int exclude = dp[i-1][w];
                dp[i][w] = max(include,exclude);
            }
        }
        
        return dp[n-1][capacity];
    }
   
    //space optimization
    int solveOpti(int capacity,vector<int> &val,vector<int> &wt,int i){
        int n = val.size();
        vector<int> prevrow(capacity+1,0);
        //for 0th item i.e. 0th row filling
        //if w<weight[0] => 0
        for(int w = wt[0] ; w <= capacity ; w++){
            if(w >= wt[0]){
                prevrow[w] = val[0];
            }
            else{
                prevrow[w] = 0;//already during intitialization
            }
        }
        
        for(int i = 1 ; i < n ; i++){
            vector<int> currrow(capacity+1,0);
            for(int w = 0 ; w <= capacity ; w++){
                //inclusion
                int include = 0;
                if(w>=wt[i]){
                    include = val[i] + prevrow[w-wt[i]];
                }
                //exclusion
                int exclude = prevrow[w];
                currrow[w] = max(include,exclude);
            }
            prevrow = currrow;
        }
        
        return prevrow[capacity];
    }
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
        // int n = val.size();
        // vector<vector<int>> dp(W+1,vector<int>(n,-1));
        // return solveMem(W,val,wt,n-1,dp);
        
        
        // return solveTab(W,val,wt,0);
        
        
        return solveOpti(W,val,wt,0);
    }
};