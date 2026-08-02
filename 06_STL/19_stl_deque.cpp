// deque or doubly ended queue it is also dynamic. unlike vector we can apply functions from both front and back
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    cout <<"size is " << d.size() <<endl;
    d.push_back(5);
    cout <<"size is " << d.size() <<endl;
    d.push_back(4);
    cout <<"size is " << d.size() <<endl;
    d.push_front(1);
    cout <<"size is " << d.size() <<endl;
    cout << "Deque is : " <<endl;
    for(int i:d){
        cout << i <<" " ;
    }
    cout <<endl;
    d.push_back(14);
    d.push_front(11);
    cout << "Deque is : " <<endl;
    for(int i:d){
        cout << i <<" " ;
    }
    cout <<endl;
    d.pop_back();
    for(int i:d){
        cout << i <<" " ;
    }
    cout <<endl;
    d.pop_front();
    for(int i:d){
        cout << i <<" " ;
    }
    cout <<endl;
    // cout << "capacity is " << d.capacity() <<endl; here its not valid
    cout <<"size is " << d.size() <<endl;
    cout << "front element is " << d.front() <<endl;
    cout << "last element is " <<d.back() <<endl;
    d.push_front(2);
    d.push_back(34);
    cout << "Before erase " ;
    for(int i:d){
        cout << i <<" " ;
    }
    cout <<endl;
    cout << "After erase ";
    d.erase(d.begin(),d.begin()+1);
    for(int i:d){
        cout << i <<" " ;
    }
    cout <<endl;
    cout  <<endl <<"Before clear" <<endl;
    cout << "Size : " << d.size() <<endl;
    d.clear();
    cout << "After clear" <<endl;
    cout << "Size : " << d.size() <<endl;

}