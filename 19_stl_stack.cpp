// last in first out just like stake of plates
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Abhishek");
    s.push("Nikhil");
    s.push("lala");
    cout << "top element : " <<s.top() <<endl;
    s.pop();
    cout << "top element : " <<s.top() <<endl;
    cout << "empty or not : " <<s.empty() <<endl;
    cout << "size of stake : " <<s.size() <<endl;
}
