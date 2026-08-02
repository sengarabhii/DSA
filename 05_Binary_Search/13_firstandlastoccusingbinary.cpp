#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,5,5,5,5,8,9};
    int n=7,k=5;
    int start=0,end=n-1;
    int mid=(start+end)/2;
    int mid2=mid;
    while(start<end){
        if(arr[mid]==k){
            while(arr[mid]==arr[mid-1] && (mid-1)>=0){
                mid--;
            }
            while(arr[mid2]==arr[mid2+1] && (mid+1)<n){
                mid2++;
            }
            cout << endl << mid << " " << mid2;
            break;
            


        }
        else if(arr[mid]<k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}