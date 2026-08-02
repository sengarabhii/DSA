#include<iostream>
using namespace std;
void bubblesort(int* arr, int size){
    //base case
    if(size==0 || size==1) return;
    //ek case solve karlia by placing largest element to right
    for(int i = 0 ; i < size-1 ; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,size-1);
}
void bubblesort(int* arr, int size){
    if(size==1) return;
    for(int i = 0 ; i < size-1 ; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,size-1);
}
int main(){
    int arr[] = { 5,1,8,2,7,4};
    bubblesort(arr,6);
    for(int i = 0 ; i < 6 ; i++){
        cout << arr[i] << " ";
    }
}