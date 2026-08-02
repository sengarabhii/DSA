#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={2,8,3,4,9};
    int s = 0;
    int e = v.size()-1;
    while(s<e){
        int temp;
        temp=v[s];
        v[s]=v[e];
        v[e]=temp;
        s++;
        e--;
    }
    for(int i : v){
        cout << i << " ";
    }
}