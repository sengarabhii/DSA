class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int ans = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]].push_back(i);
            vector<int> temp = mp[nums[i]];
            int n = temp.size();
            if(n>=3){
                int val = 2*temp[n-1]-temp[n-2]-temp[n-3]+(temp[n-2]-temp[n-3]); 
                ans = min(ans,val);
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
        
    }
};