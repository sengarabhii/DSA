#include<iostream>
using namespace std;
int main(){
    int nums[]={1,2,3,2,4};
    int arr[100],count=0;
    for(int i=0;i<sizeof(nums);i++){
        for(int j=0;(j<sizeof(nums))&&(i!=j);j++){
            if(nums[i]==nums[j]){
                count++;
                arr[count-1]=nums[i];
                
            }
        }
    }
    for(int i=0;i<)
}
// bool uniqueOccurrences(int *arr) {
//     int size=sizeof(arr)/sizeof(int);
//     int count[2001]={0};
//     for(int i=0;i<size;i++){
//         int key=arr[i];
//         count[1000+key]+=1;
//     }
//     for(int i=0;i<2001;i++){
//         for(int j=0;j<2000;j++){
//             if(count[j] < count[j+1]){
//                 int temp = count[j];
//                 count[j] = count[j+1];
//                 count[j+1] = temp;
//             }
//         }
//     }
//     for(int i=0;i<2001;i++){
//         if(i==0){
//             break;
//         }
//         else{
//             if(count[i]==count[i+1]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[]={1,2};
//     bool a=uniqueOccurrences(arr);
//     cout << endl <<a;
// }