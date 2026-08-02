#include<iostream>
using namespace std;
int main(){
char str[] = "abhissshek";
// cout << sizeof(str);
int arr[26] = {0} ;
    for(int i = 0 ; i < sizeof(str)-1 ; i++){
        int ind ;
        ind = str[i] - 'a' ;
        arr[ind]+=1;
    }
    int max;
    max = 0 ;
    int j;
    for(j = 0 ; j < 26 ; j++){
        if(arr[j] > max){
            max = arr[j];
        }
    }
    char ch = (char)j + 'a';
    cout << ch;
}