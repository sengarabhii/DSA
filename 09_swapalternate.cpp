#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] <<"\t";
    }
}
void swapalt(int arr[],int n){
    int start=0;
    int end=start+1;
    while(start<n-1){
        swap(arr[start],arr[end]);
        start+=2;
        end+=2;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    cout << "Before swapping alternate elements:";
    printarray(arr,n);
    swapalt(arr,n);
    cout <<endl << "After swapping alternate elements:";
    printarray(arr,n);
    

    
}