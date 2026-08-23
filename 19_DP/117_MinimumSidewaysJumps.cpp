#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //using memoization
    int solve(vector<int> &obstacles,vector<vector<int>> &dp,int i,int j){//i->lane //j->point
        int n = obstacles.size();
        if(j==n) return 0;
        else if(obstacles[j]==i) return INT_MAX-1;
        if(dp[i][j]!=-1) return dp[i][j];
        int mini = solve(obstacles,dp,i,j+1);
        //going to first lane
        if(i==2 || i==3){
            if(obstacles[j]!=1) mini = min(mini,1+solve(obstacles,dp,1,j+1));
        }
        //going to second lane
        if(i==1 || i==3){
            if(obstacles[j]!=2) mini = min(mini,1+solve(obstacles,dp,2,j+1));
        }
        //going to third lane
        if(i==1 || i==2){
            if(obstacles[j]!=3) mini = min(mini,1+solve(obstacles,dp,3,j+1));
        }
        
        dp[i][j] = mini;
        return dp[i][j];
        

    }
    int minSideJumps(vector<int>& obstacles) {
        int n = obstacles.size();
        vector<vector<int>> dp(4,vector<int>(n,-1));
        return solve(obstacles,dp,2,0);
    }
};