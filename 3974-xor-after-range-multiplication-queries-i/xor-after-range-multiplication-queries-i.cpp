class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int m = 1e9 + 7;
        for(int i = 0 ; i < queries.size() ; i++){
            vector<int> q = queries[i];
            int l = q[0];
            int r = q[1];
            int k = q[2];
            int v = q[3];
            for(int j = l ; j <= r ; j+=k){
                nums[j] = (1LL*nums[j]*v)%m;
            }
        }
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            ans = ans^nums[i];
        }
        return ans;
    }
};