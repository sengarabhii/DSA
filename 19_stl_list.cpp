#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    cout<< "List is empty or not : " <<l.empty() <<endl;
    l.push_back(2);
    l.push_back(5);
    l.push_front(1);
    for(int i:l){
        cout << i << " ";
    }
    cout <<endl;
    cout << "first element" <<l.front() <<endl;;
    cout << "last element" <<l.back() <<endl;
    // cout << "second element" <<l.at(2); in list we cann't access element directly. we have to traverse for it.
    l.erase(l.begin());
    for(int i:l){
        cout << i << " ";
    }
    cout <<endl;
    list<int> ll(5,20);
    for(int i:ll){
        cout << i <<" ";
    }
}