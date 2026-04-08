#include <bits/stdc++.h>
using namespace std;

int main() {
	int A[100000];
	int N ;
    int X;
    cin >> N >> X;
	for(int i = 0 ; i < N ; i++){
	    cin >> A[i];
	}
	int s = 0;
	int e = N-1;
	bool flag = 0;
	while(s<=e){
	    int mid = s + (e -s )/2;
	    if(A[mid] == X){
	        cout << "YES";
	        flag = 1;
	        break;
	    }
	    else if(A[mid] > X){
	        e = mid - 1;
	    }
	    else{
	        s = mid + 1;
	    }
	}
	if(!flag){
	cout << "NO";
	}

}