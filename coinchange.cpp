#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int> &temp,int target,vector<int> nums,int sum,int ind,int &mini){
    if(sum==target){
        if(mini>temp.size()){
            mini = temp.size();
        }
        return;
    }
    if(sum>target){
        return ;
    }

    for(int i = ind ; i < nums.size() ; i++){
        //inclusion
        temp.push_back(nums[i]);
        sum+=nums[i];
        solve(temp,target,nums,sum,i,mini);
        //exclusion
        temp.pop_back();
        sum-=nums[i];
        

    }

}
int main(){
    vector<int> nums = {1,2,5,10,20,50};
    // vector<vector<int>> ans;
    vector<int> temp;
    int target = 60;
    int sum = 0;
    int i = 0;
    int mini = INT_MAX;
    solve(temp,target,nums,sum,i,mini); 
    cout << "minimum coins : " << mini;
    
}