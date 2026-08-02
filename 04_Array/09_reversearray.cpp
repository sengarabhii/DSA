// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=5;
//     cout <<"Before reversing:";
//     for(int i=0;i<n;i++){
//         cout << arr[i] <<"\t";
//     }
//     cout <<endl;
//     for(int i=0;i<n/2;i++){
//         int temp;
//         temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//     cout << "After reversing:";
//     for(int i=0;i<n;i++){
//         cout << arr[i] <<"\t";
//     }
// }
#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] <<"\t";
    }
}
void revarray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
void revarray2(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        // int temp;
        // temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    cout <<"Before reversing:";
    printarray(arr,n);
    cout <<endl <<endl;
    revarray2(arr,n);
    cout << "After reversing:";
    printarray(arr,n);
    cout <<endl;
}

