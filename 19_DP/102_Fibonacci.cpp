#include<bits/stdc++.h>
using namespace std;
//top down approach
//recursion + memoization
int fibo(int n,vector<int> &dp){
    if(n==0 || n==1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = fibo(n-1,dp) + fibo(n-2,dp);
    return dp[n];
}

//bottom up approach
//tabulation

// int main(){
//     int n;
//     cin >> n;
//     vector<int> dp(n+1,-1);
//     dp[0] = 0;
//     dp[1] = 1;
//     for(int i = 2 ; i <= n ; i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     cout << dp[n];
// }

//space optimisation
int main(){
    int n;
    cin >> n;
    int prev1 = 0;
    int prev2 = 1;
    for(int i = 2 ; i <= n ; i++){
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1;
}