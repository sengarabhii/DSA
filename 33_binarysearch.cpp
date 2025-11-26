#include<iostream>
using namespace std;
int binarysearch(int *arr,int s,int e,int key){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return binarysearch(arr,mid+1,e,key);
    }
    else{
        return binarysearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[] = {2,4,6,8,10,12,18};
    int size = 7;
    int s = 0 , e = size-1;
    int key = 10;
    int st = binarysearch(arr,s,e,key);
    if(st==-1){
        cout << "Element not found" ;
    }
    else{
        cout << "element found at index " << st ;
    }
}