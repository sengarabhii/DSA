#include<iostream>
using namespace std;
bool issorted(int *arr,int size){
    if(size==1 || size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorted(arr+1,size-1);
    }
}
int main(){
    int arr[]= {2,4,6,7,8,3};
    int size = 5;
    if(issorted(arr,size)){
        cout << "sorted" ;
    }
    else{
        cout << "not sorted";
    }
}