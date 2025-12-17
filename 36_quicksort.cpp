#include<iostream>
using namespace std;
int partition(int *arr,int s ,int e){
    int pivot = arr[s];
    int count = 0;
    //counting no of elements less than pivot
    for(int i = s+1  ; i <= e ; i++){
        if(arr[i]<pivot) count++;
    }
    int pivotindex = s + count;
    //placing pivot to its right place
    swap(arr[pivotindex],arr[s]);
    pivot = arr[pivotindex];
    int i = s;
    int j = e;
    while(i<pivotindex && j > pivotindex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotindex && j > pivotindex){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotindex;
}
void quicksort(int *arr, int s ,int e){
    //base case
    if(s>=e) return;
    int p = partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);   
}
int main(){
    int arr[] = {2,4,1,7,4,9,88,4,3,232,12};
    int l = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,l-1);
    for(int i = 0 ; i < l ; i++){
        cout << arr[i] << " ";
    }

}