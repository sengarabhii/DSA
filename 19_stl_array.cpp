#include<iostream>
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
}


