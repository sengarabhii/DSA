#include<bits/stdc++.h>
using namespace std;
void solve(int size,int arr[],int target,int &cnt,int i){
    if(i==size  || target<0){
        if(target==0) cnt++;
        return;
    }
    //inclusion
    solve(size,arr,target-arr[i],cnt,i);
    //exclusion
    solve(size,arr,target,cnt,i+1);
}
int countNoways(int n,int arr[],int target){
    int cnt = 0;
    solve(n,arr,target,cnt,0);
    return cnt;
}
int main(){
    int arr[] = {1,2,3};
    int target = 4 ;
    cout <<  countNoways(3,arr,target);
}