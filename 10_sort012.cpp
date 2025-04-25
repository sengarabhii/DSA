#include<iostream>
using namespace std;
void sortone(int arr[],int n){
    int i=0,j=0,k=n-1;
    while(j<=k){
        while(arr[j]==0 && j<=k){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        while(arr[j]==1 && j<=k){
            j++;
        }
        while(arr[j]==2 && j<=k){
            swap(arr[k],arr[j]);
            k--;
        }
    }
       
}
// for sort 0 and 1
    // while(i<j){
    //     while(arr[i]==0 && i<j){
    //         i++;
    //     }
    //     while(arr[j]==1 && i<j){
    //         j--;
    //     }
    //     // if control comes here it means 1 is at i position and 0 is at j position
    //     if(i<j){
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j--;
    //     }
       
    // }

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    int arr[8]={1,2,0,2,0,0,1,0};
    sortone(arr,8);
    printarray(arr,8);
    return 0;
}




