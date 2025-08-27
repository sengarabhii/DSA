#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(9);
    v.push_back(12);
    v.push_back(23);
    cout << "Finding 12 -->" <<binary_search(v.begin(),v.end(),12) <<endl;
    cout << "lower bound : " <<lower_bound(v.begin(),v.end(),6) - v.begin() <<endl;
    cout << "lower bound : " <<lower_bound(v.begin(),v.end(),13) - v.begin() <<endl;
    cout << "upper bound : " <<upper_bound(v.begin(),v.end(),12) - v.begin() <<endl;
    cout << "upper bound : " <<upper_bound(v.begin(),v.end(),1) - v.begin() <<endl;


    int a = 6;
    int b = 45;
    cout << "max of a and b" <<max(a,b);
    cout << "value of a,b : " <<a <<"," <<b <<endl;
    cout <<"after swapping : ";
    swap(a,b);
    cout << "value of a and b : " <<a <<"," <<b <<endl;



    string s = "Abhi";
    reverse(s.begin(),s.end());
    cout << "AFter reverse : " << s;

    cout << "Before : " <<endl;
    for(int i : v){
        cout << i << " " ;
    }cout <<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout << "Now Rotating : " <<endl;
    for(int i : v){
        cout << i << " ";
    }cout <<endl;


    sort(v.begin(),v.end());
    cout << "After sorting : ";
    for(int i : v){
        cout << i << " ";
    }
}