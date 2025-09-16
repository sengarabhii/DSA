#include<iostream>
using namespace std;
int main(){
    int mat[3][4];
    //taking input row wise 
    // for(int row = 0 ; row < 3 ; row++){
    //     for(int col = 0 ; col < 4 ; col++){
    //         cin >> mat[row][col];
    //     }
    // }
    //taking input col wise
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
}