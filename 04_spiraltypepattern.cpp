#include <bits/stdc++.h>
using namespace std;
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
int main() {
    cout << "Enter n :";
    int n;
    cin >> n;
    int y = n;
    n = 2*n - 1;
    vector<vector<int>> mat(n,vector<int>(n,0));
    int startingrow = 0;
    int startingcol = 0;
    int endingrow = n-1;
    int endingcol = n-1;
    while(y!=0){
        //top ->left to right
        for(int j = startingcol ; j <= endingcol ; j++){
            mat[startingrow][j] = y;
        }
        startingrow++;
        //right ->top to bottom
        for(int i = startingrow ; i <= endingrow ; i++){
            mat[i][endingcol] = y;
        }
        endingcol--;
        //bottom -> right to left
        for(int j = endingcol ; j >= startingcol ; j--){
            mat[endingrow][j] = y;
        }
        endingrow--;
        //left -> bottom to right
        for(int i = endingrow ; i >= startingrow ; i--){
            mat[i][startingcol] = y;
        }
        startingcol++;
        y--;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << mat[i][j];
        }
        cout <<endl;
    }
}
