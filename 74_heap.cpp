#include<bits/stdc++.h>
using namespace std;
// a heap is complete binary tree which comes with heap order property
//we use array to store and maintain it for a node at index n its left child will be at 2*n and right child will be at 2n+1 
//parent of node n is n/2
class heap{
    public:
    int arr[100];
    int size = 0;
    void insert(int x){
        //first step insert at end
        size++;
        int ind = size;
        arr[ind] = x;
        //while its not come to their right position swap it
        while(ind>1){
            int parent = ind/2;
            if(arr[parent]<arr[ind]){
                swap(arr[ind],arr[ind/2]);
                ind = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i = 1 ; i <= size ; i++){
            cout << arr[i] << " " ;
        }
        cout <<endl;
    }
    void deletefromheap(){//deletion in heap means delete root node
        if(size==0) return;
        //first swap with last node and then delete last node
        int ind = 1;
        arr[ind] = arr[size];
        size--;
        //propagate  root to its correct position
        while(ind<=size){
            int left = 2*ind;
            int right = 2*ind+1;
            int temp = ind;
            if(left<=size && arr[left]>arr[temp]){
                temp = left;
            }
            if(right<=size && arr[right]>arr[temp]){
                temp = right;
            }
            if(ind!=temp){
                swap(arr[temp],arr[ind]);
                ind = temp;
            }
            else{
                return;
            }
        }
    }
};
//heapify means placing element to its correct position, in complete binary tree leaf nodes are from n/2+1 to n so we can assume them as individual balance heap, so we have to heapify n/2 to 1 nodes
void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left<=n && arr[left]>arr[largest]) largest = left;
    if(right<=n && arr[right]>arr[largest]) largest = right;
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n){
    //means sorting array
    //first of all replace root node with last element 
    //not last element is sorted i.e. largest forget it i.e. n--
    //then place root to its correct position
    while(n!=1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}
int main(){
    heap h;
    h.insert(5);
    h.insert(1);
    h.insert(8);
    h.insert(10);
    h.insert(3);
    // h.print();
    h.deletefromheap();
    // h.print();
    //heap creation
    int arr[7] = {0,56,23,67,12,89,100};
    int n = 6;
    for(int i = n/2 ; i >= 1 ; i--){
        heapify(arr,n,i);
    }
    for(int i = 1 ; i <= n ; i++){
        cout << arr[i] << " "; 
    }
    cout <<endl;
    heapsort(arr,n);
    for(int i = 1 ; i <= n ; i++){
        cout << arr[i] << " "; 
    }
    cout <<endl <<endl;

    //using stl
    //we use priority queue to implement min heap and max heap
    priority_queue<int> pq; //by default it is max heap
    pq.push(4);
    pq.push(1);
    pq.push(9);
    pq.push(8);
    cout << pq.top() <<endl;
    pq.pop();
    cout << pq.top() <<endl;
    if(pq.empty()) cout << "empty" <<endl;
    else cout << "not empty" <<endl;
    priority_queue<int,vector<int>,greater<int>> qp;
    qp.push(4);
    qp.push(1);
    qp.push(9);
    qp.push(8);
    cout << qp.top() <<endl;
    qp.pop();
    cout << qp.top() <<endl;
}