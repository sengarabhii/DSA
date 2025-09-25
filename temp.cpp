#include<iostream>
#include<vector>
using namespace std;
void wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    for(int j = 0 ; j < mCols ; j++){
        if(j%2!=0){
            for(int i = nRows-1 ; i >= 0 ; i--){
                cout << arr[i][j] << " " ;
            }
        }
        else{
            for(int i = 0 ; i < nRows ; i++){
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    wavePrint(arr,3,4);
}