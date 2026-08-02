#include<iostream>
using namespace std;
int sum_ofarr(int *arr,int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter no. of elements : " <<endl;
    cin >> n;
    // when program is compiled it comes up with two type of memory -> stack and heap. stack is small memory and heap is very large than stack. when we initialize int arr[50]; (called static allocation) it reserve that amount of space in stack that why we avoid to use variable inside arr[n] because if user input n very large and it will exceed stack memory that's why we are told to avoid this and told to use constant value so that stack come up with that much amount of size earlier. in dynamic memory allocation we use "new" keyword which allocate memory during program run in heap. new keyword will create a box in heap (reserve) but we can't name it. it return address of that memory so we use pointer to store that address for char dynamic allocation we will use like : char* c = new char; for int : int* n = new int;
    // n is initialised in stack (8 byte) and int(4 byte) is allocated in heap. we need to free memory in heap while in stack it's not needed;
    int* arr = new int[n];
    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;
        arr[i] = val;
    }
    int sum = sum_ofarr(arr,n);
    cout << "sum is " << sum <<endl;

}