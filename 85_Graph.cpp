#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
        unordered_map<int,list<int>> adjmatrix;
        //direction 0 -> undirected
        //direction 1 -> directed
        void add(int u,int v,int direction){
            adjmatrix[u].push_back(v);
            if(direction==0){
                adjmatrix[v].push_back(u);
            }
        }
        void print(){
            for(auto i : adjmatrix){
                cout << i.first << " -> ";
                for(auto j : i.second){
                    cout << j << ",";
                }
                cout <<endl;
            }
        }
};
int main(){
    graph g;
    int n,m;
    cout << "Enter no. of nodes and edges : ";
    cin >> n >> m;
    cout << "Enter edges in u v format :";
    for(int i = 0 ; i < m ; i++){
        int u,v;
        cin >> u >> v;
        //creating undirected graph
        g.add(u,v,0);
    }
    //printing
    g.print();
}
