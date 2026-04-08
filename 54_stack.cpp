#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    //push
    s.push(1);
    s.push(2);
    s.push(3);
    //peek
    cout << s.top() <<endl;
    //pop
    s.pop();
    cout <<s.top() <<endl;
    if(s.empty()){
        cout << "stack is empty " <<endl;
    }
    else{
        cout << "stack is not empty" <<endl;
    }
}