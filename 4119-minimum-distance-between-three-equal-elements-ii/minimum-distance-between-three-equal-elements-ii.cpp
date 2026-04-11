class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,deque<int>> mp;
        int ans = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]].push_back(i);
            int n = mp[nums[i]].size();
            if(n>3){
                mp[nums[i]].pop_front();
                n--;
            }
            if(n==3){
                int val = 2*(mp[nums[i]].back()-mp[nums[i]].front()); 
                ans = min(ans,val);
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};