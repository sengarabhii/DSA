#include<iostream>
using namespace std;
bool srcharr(int* arr,int key,int size){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        return srcharr(arr+1,key,size-1);
    }
}
int main(){
    int arr[] = {5,2,8,1,6};
    int key ;
    cout << "enter element you want to search";
    cin >> key;
    if(srcharr(arr,5,key)){
        cout << "element present " ;
    }
    else{
        cout << "element is not present "; 
    }
}