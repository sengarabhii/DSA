#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> mp;
    mp[5]  = 10;
    mp[6] = 12 ;
    mp.insert({7,14});
    cout << mp[5] <<endl;
    cout << mp[6] <<endl;
    cout << mp[7] <<endl;
    mp[5] = 100;
    cout << mp[5]; 
}