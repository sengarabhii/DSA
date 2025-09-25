#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int elmnt,int m,int n){
    for(int row = 0 ; row < m ; row++){
        for(int col = 0 ; col < n ;col++){
            if(arr[row][col] == elmnt){
                return 1;
            }
        }
    }
    return 0;
}
void rowwisesum(int arr[][4],int m , int n){
    int sum  ;
    for(int row = 0 ; row < m ; row++){
        sum = 0;
        for(int col = 0 ; col < n ;col++){
            sum+=arr[row][col];
        }
        cout << "Sum of " << row+1  << "th row is " << sum <<endl;
    }
}
void largestrowsum(int arr[][4],int m , int n){
    int sum  ;
    int maxi = INT_MIN;
    int rowindex ;
    for(int row = 0 ; row < m ; row++){
        sum = 0;
        for(int col = 0 ; col < n ;col++){
            sum+=arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowindex = row;
        }
    }
    cout << "Largest row sum is " <<maxi <<" and row no. is " <<rowindex+1 <<endl;
}
void colwisesum(int arr[][4],int m , int n){
    int sum  ;
    for(int col = 0 ; col < n ; col++){
        sum = 0;
        for(int row = 0 ; row < m ;row++){
            sum+=arr[row][col];
        }
        cout << "Sum of " << col+1  << "th col is " << sum <<endl;
    }
}
int main(){
    int mat[3][4];
    //taking input row wise 
    // for(int row = 0 ; row < 3 ; row++){
    //     for(int col = 0 ; col < 4 ; col++){
    //         cin >> mat[row][col];
    //     }
    // }
    //taking input col wise
    cout << "Enter 12 elements : " ;
    for(int col = 0 ; col < 4 ; col++){
        for(int row = 0 ; row < 3 ; row++){
            cin >> mat[row][col];
        }
    }
    //printing matrix
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            cout << mat[row][col] <<  " " ;
        }
        cout <<endl;
    }
    // cout << "Enter element to search : ";
    // int srch;
    // cin >> srch;
    // if(ispresent(mat,srch,3,4)){
    //     cout << "Element found ..." <<endl;
    // }
    // else{
    //     cout << "Element not found ... " << endl;
    // }

    //row wise sum 
    rowwisesum(mat,3,4);
    colwisesum(mat,3,4);
    largestrowsum(mat,3,4);

}