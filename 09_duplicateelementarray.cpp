#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] <<"\t";
    }
}
void unique(int arr[],int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int flag=0;
        for(int j=0;j<n;j++){
            if((key==arr[j])&&(i!=j)){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout << key << "\t";
        }

    }
    
}
int main(){
    int arr[]={1,2,1,1,5,6,2,7,7,2,9,14,15,14,18,15,18};
    int n=sizeof(arr)/sizeof(int);
    cout << "Duplicate elements:";
    unique(arr,n);

    
}