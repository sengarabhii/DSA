#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max-heap
    priority_queue<int> maxi;
    maxi.push(3);
    maxi.push(2);
    maxi.push(5);
    maxi.push(9);
    maxi.push(1);
    cout << "size of heap : " <<maxi.size() <<endl;
    int l=maxi.size();
    for(int i=0;i<l;i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout <<endl;
    cout << "now size of heap : " <<maxi.size() <<endl;

    //min-heap
    priority_queue<int, vector<int>,greater<int>> mini;
    mini.push(4);
    mini.push(2);
    mini.push(8);
    mini.push(5);
    mini.push(3);
    cout << "size of heap : " <<mini.size() <<endl;
    int n=mini.size();
    for(int i=0;i<n;i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout <<endl;
    cout << "now size of heap : " <<mini.size() <<endl;

    cout<< "bhai ab to khali hai n tu : " <<mini.empty() <<endl;


}