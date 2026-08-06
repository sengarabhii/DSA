#include<bits/stdc++.h>
using namespace std;
class Solution {
int solve(vector<int> &nums,int s,int e){
    if(e-s+1==1) return nums[s];
    int prev2 = nums[s];
    int prev1 = max(nums[s],nums[s+1]);
    for(int i = s+2 ; i <= e ; i++){
        int inc = nums[i] + prev2;
        int exc = prev1;
        int curr = max(inc,exc);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int op1 = solve(nums,0,n-2);
        int op2 = solve(nums,1,n-1);
        return max(op1,op2);
    }
};