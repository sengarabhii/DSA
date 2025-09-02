#include<iostream>
using namespace std;
void mergesort(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            // arr3[k]=arr1[i];
            // k++;
            // i++;
            arr3[k++]=arr1[i++];
            
        }
        else if(arr1[i]>=arr2[j]){
            // arr3[k]=arr2[j];
            // j++;
            // k++;
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
void print(int arr3[],int n){
    cout << "Now merged array is : " <<endl;
    for(int i=0;i<n;i++){
        cout << arr3[i] << "  ";
    }
    cout <<endl;
}
void insertion(int arr1[], int n, int elmnt){
    while(elmnt<arr1[n]){
        arr1[n+1]=arr1[n];
        n--;
    }
    arr1[n+1]=elmnt;
}
int main(){
    // int arr1[5]={1,3,6,7,33};
    int arr1[12]={1,3,6,7,33};
    int arr2[7]={2,4,9,34,56,78,88};
    // int arr3[12];
    // mergesort(arr1,5,arr2,7,arr3);
    // print(arr3,12);
    int indx=4;
    for(int j=0;j<7;j++){
        insertion(arr1,indx,arr2[j]);
        indx++;
    }
    print(arr1,12);

}