#include<iostream>
using namespace std;
int main(){
    int size;
    int f,r = -1;
    cout << "Enter size of deque : ";
    cin >> size;
    int deque[size];
    int p = 0 ;
    for(int i = 0 ; i < size ; i++){
        int elmnt;
        cin >>elmnt;
        if(f==-1){//queue is empty
            deque[0]=elmnt;
            f = 0 ;
            r = 0 ;
            break;
        }
        p = r;
        while(deque[p]>elmnt){
            deque[p+1]=deque[p];
            p--;
        }
        deque[p+1] = elmnt;
        r++;
        

    }
    for(int i:deque){
        cout << i <<endl;
    }
}