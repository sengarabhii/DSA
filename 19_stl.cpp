#include<iostream>
#include<array>
using namespace std;

int main(){
    //normal
    int arr[4]={1,2,3,4};
    cout <<"First element is " << arr[0] <<endl;
    //stl
    array<int,5> arry={3,4,5,6,6};
    cout <<"First element is " << arry[0] <<endl;
}