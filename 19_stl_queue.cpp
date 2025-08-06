//first in first out that's queue
 #include<iostream>
 #include<queue>
 using namespace std;
 int main(){
    queue<string> q;
    q.push("Abhishek");
    q.push("Sengar");
    q.push("Nikhil");
    cout << "first element : " <<q.front() <<endl;
    cout << "size : " <<q.size() <<endl;
    cout << "last element : " <<q.back() <<endl;
    q.pop();
    cout <<"After pop : " <<endl;
    cout << "now first element : " <<q.front() <<endl;
    cout << "size : " <<q.size() <<endl;
 }