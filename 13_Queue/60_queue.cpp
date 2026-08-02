#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    if(q.empty()){
        cout << "queue is empty " <<endl;
    }
    q.push(5);
    cout << "front element is " << q.front() <<endl;
    q.push(6);
    cout << "front element is " << q.front() <<endl;
    q.push(7);
    cout << "front element is " << q.front() <<endl;
    q.pop();
    cout << "front element is " << q.front() <<endl;
    cout << "size of queue is " << q.size() <<endl;
}