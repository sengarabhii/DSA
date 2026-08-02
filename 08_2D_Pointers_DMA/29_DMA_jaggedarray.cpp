#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter rows : " ;
    cin >> row;
    int**  mat = new int*[row];
    int* coll = new int[row];
    for(int i = 0 ; i < row ; i++){
        int col ;
        cout << "Enter no. of elmnt : " ;
        cin >> col;
        coll[i] = col;
        int* arr = new int[col];
        mat[i] = arr;
    }
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < coll[i] ; j++){
            int val;
            cin >> val;
            
        }
    }
}