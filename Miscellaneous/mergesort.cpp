#include<iostream>
using namespace std;
void merge(int *arr,int s, int e){
    int mid = s + (e - s)/2 ;
    int len1 = mid-s+1;
    int len2 = e - mid;
    int* arr1 = new int[len1];
    int* arr2 = new int[len2];
    //copying content in arr1
    for(int i = 0 ; i < len1 ; i++){
        arr1[i] = arr[s+i];
    }
    //copying content in arr2
    for(int i = 0 ; i < len2 ; i++){
        arr2[i] = arr[mid+i+1];
    }
    int k1 = 0;
    int k2 = 0;
    int mainind = s;
    while(k1<len1 && k2<len2){
        if(arr1[k1]<arr2[k2]){
            arr[mainind++] = arr1[k1++];
        }
        else{
            arr[mainind++] = arr2[k2++];
        }
    }
    while(k1<len1){
        arr[mainind++] = arr1[k1++];
    }
    while(k2<len2){
        arr[mainind++] = arr2[k2++];
    }
    delete []arr1;
    delete []arr2;
}
void mergesort(int arr[],int s,int e){
    //base condition
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[] = {2,4,1,7,4,9,88,4,3,232,12};
    int l = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,l);
    for(int i = 0 ; i < l ; i++){
        cout << arr[i] << " ";
    }

}