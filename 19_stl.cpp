/*#include<iostream>
#include<array>
using namespace std;

int main(){
    //an stl array depend on basic array
    array<int,5> a={1,3,5,7,9};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout << a[i] <<endl;
    }
    cout << "Element at 4th index : " << a.at(4) <<endl;
    cout << "Empty or not : " << a.empty() <<endl;
    cout << "First element : " << a.front() <<endl;
    cout << "Last element : " << a.back() <<endl;
}*/

// Vector

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
        cout << i <<endl;
    }
    cout << "Vector is " <<endl;
    cout << "Front element : " <<v.front() <<endl;
    cout << "Back element : " <<v.back() <<endl;
    cout << "Element at 3rd index : " <<v.at(3) <<endl;
    cout << "Before pop : " <<endl;
    for(int i:v){
        cout << i <<endl;
    }
    cout << "After pop : " <<endl;
    v.pop_back();
    for(int i:v){
        cout << i <<endl;
    }



}
