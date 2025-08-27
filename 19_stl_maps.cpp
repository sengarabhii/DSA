#include <iostream>
#include <map>
using namespace std;
// by default it is also ordered, and one key can point only to single value but value can be point by multiple keys
int main()
{
    map<int, string> m;
    m[1] = "Abhishek";
    m[4] = "Nikhil";
    m[2] = "Lala";
    m[8] = "Abhishek";
    //we can also insert like below
    m.insert({6,"Abhii"});
    m.insert({12,"Rajput"});
    for(auto i : m){
        cout << i.first << " " << i.second <<endl;
    }
    // map<int,string>::iterator itr;
    // for(itr=m.begin();itr!=m.end();itr++){
    //     cout << itr->first <<" " <<itr->second <<endl;
    // }
    cout <<" 4 is present or not : " << m.count(4) <<endl;
    cout <<"-4 is present or not : " << m.count(-4) <<endl;
    cout << "Before erase : " <<endl;
    for(auto i : m){
        cout << i.first <<endl;
    }
    m.erase(8);
    cout << "After erase : " <<endl;
    for(auto i : m){
        cout << i.first <<endl;
    }
    cout <<endl <<endl;
    map<int,string>::iterator itr=m.find(6);
    // auto itr = map.find(5);
    for(auto i=itr;i!=m.end();i++){
        cout << (*i).first <<endl;

    }
}