#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;

    while(start<=end){
        // int mid=(start+end)/2;
        // we know that mid is a int variable & can store max value of 2^31 in our compliler so suppose if start and end is 2^31-1 then their addition will result out of range bcz division will be performed later after storing value of addition to variable
        int mid=start+(end-start)/2;
        if(key==arr[mid]){
            return mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,5,6,8,10};
    int srch;
    cout << "Enter element you want to search:";
    cin >> srch;
    int pos=BinarySearch(arr,5,srch);
    if(pos==-1){
        cout << "Element not found!!!";
    }
    else{
        cout << srch << " found at position " << pos;
    }
    return 0;
}