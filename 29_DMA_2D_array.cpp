#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Enter size of m,n : " ;
    cin >> m >> n ;
    int** mat = new int*[n];
    for(int i = 0 ; i < n ; i++){
        int* arr = new int[m];
        mat[i] = arr;
    }
    // taking input
    cout << "Enter " << m*n << " elements : ";
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            int val;
            cin >> val;
            mat[i][j] = val;

        }
    }
    // output

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << mat[i][j] << " ";

        }
        cout <<endl;
    }
    //releasing memory
    for(int i = 0 ; i < n ; i++){
        delete[] mat[i];
    }
    delete[] mat;
}