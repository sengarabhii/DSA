#include <bits/stdc++.h>
using namespace std;
int linearsrch(vector<int> &arr,int target){
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int binarysrch(vector<int> &arr,int target,int s,int e){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        return binarysrch(arr,target,mid+1,e);
    }
    else{
        return binarysrch(arr,target,s,mid-1);
    }
}
int main(){
    vector<int> arr = {2,4,5,8,10};
    int target = 80;
    int ind1 = linearsrch(arr,target);
    int ind2 = binarysrch(arr,target,0,arr.size()-1);
    if(ind1==-1){
        cout << "Not found..." <<endl;
    }
    else cout << "Element found at index : " << ind1 <<endl;
    if(ind2==-1){
        cout << "Not found...";
    }
    else cout << "Element found at index : " << ind2 <<endl;
}