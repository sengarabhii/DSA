#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    cout << "Enter " << n << " elements:"  ;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout << "Max:" <<max <<endl;
    cout << "Min:" <<min;


}