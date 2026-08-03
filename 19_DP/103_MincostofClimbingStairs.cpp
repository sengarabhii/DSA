#include<bits/stdc++.h>
using namespace std;
//top down approach
//recursion + memoization
int solve(int n,vector<int> &costs,vector<int> &dp){
    if(n==0){
        return costs[0];
    }
    if(n==1){
        return costs[1];
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = min(solve(n-1,costs,dp) , solve(n-2,costs,dp)) + costs[n];
    return dp[n];
}

//bottom up approach
//tabulation

// int main(){
//     vector<int> costs;
//     int n = costs.size();
//     vector<int> dp(n+1,-1);
//     dp[0] = costs[0];
//     dp[1] = costs[1];
//     for(int i = 2 ; i <= n ; i++){
//         dp[i] = min(dp[i-1] , dp[i-2])+costs[i];
//     }
//     cout << dp[n];
// }

//space optimisation
int main(){
    vector<int> costs;//given
    int n = costs.size();
    for(int i = 2 ; i < n ; i++){
        costs[i] += min(costs[i-1],costs[i-2]);
    }
    return min(costs[n-1],costs[n-2]);
}