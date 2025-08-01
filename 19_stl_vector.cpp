// a vector is a dynamic array which doubles its size when old space is filled. basically it copies its data into newly made vector which is double of previous size and old one is then dump or dead

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<< "Capacity : " << v.capacity() <<endl;
    v.push_back(1);
    cout<< "Capacity : " << v.capacity() <<endl;
    v.push_back(2);
    cout<< "Capacity : " << v.capacity() <<endl;
    v.push_back(3);
    cout<< "Capacity : " << v.capacity() <<endl;
    cout << "Size : " << v.size() <<endl;
    v.push_back(4);
    v.push_back(5);
    for(int i:v){
        cout << i << " ";
    }
    cout <<endl;
    cout << "Vector is " <<endl;
    cout << "Front element : " <<v.front() <<endl;
    cout << "Back element : " <<v.back() <<endl;
    cout << "Element at 3rd index : " <<v.at(3) <<endl;
    cout << "Before pop : " <<endl;
    for(int i:v){
        cout << i << " ";
    }
    cout <<endl << "After pop : " <<endl;
    v.pop_back();
    for(int i:v){
        cout << i << " ";
    }

    cout  <<endl <<"Before clear" <<endl;
    cout << "Size : " << v.size() <<endl;
    cout << "Capacity : " <<v.capacity() <<endl;
    v.clear();
    cout << "After clear" <<endl;
    cout << "Size : " << v.size() <<endl;
    cout << "Capacity : " <<v.capacity() <<endl;
    
    
    // initializing vector with defined size
    vector<int> u(5,1);
    // bydefault value is 0 but here we changes it to 1
    cout << "vector u : " <<endl;
    for(int i:u){
        cout << i << " ";
    }
    cout <<endl;
    // copying vector
    vector<int> w(u);
    cout << "vector w : " <<endl;
    for(int i:w){
        cout << i << " ";
    }

    



}