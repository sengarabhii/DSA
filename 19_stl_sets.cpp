#include<iostream>
#include<set>
using namespace std;
//all elements are unique and modifications is  not allowed and by default it is ordered
int main(){
    set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(2);
    s.insert(8);
    s.insert(1);
    s.insert(8);
    s.insert(9);
    s.insert(12);
    for( auto i : s){
    cout << i <<endl;
    cout << i+1 <<endl;
    }
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    cout <<endl;
    for(auto i : s){
        cout << i <<endl;
    }
    cout<<endl;
    cout <<"6 is present or not : " <<s.count(6) <<endl;
    cout <<"9 is present or not : " <<s.count(9) <<endl;

    set<int>::iterator itr=s.find(8);
    for(auto it=itr;it!=s.end();it++){
        cout << *it << " ";
    }
    cout<<endl;
    
}
