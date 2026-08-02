#include<bits/stdc++.h>
using namespace std;
void dfs(int node,unordered_map<int,vector<pair<int,int>>> &adjlist,unordered_map<int,bool> &visited,stack<int> &st){
    visited[node] = 1;
    for(auto neighbour : adjlist[node]){
        if(!visited[neighbour.first]) dfs(neighbour.first,adjlist,visited,st);
    }
    st.push(node);
}
vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
{
    unordered_map<int,vector<pair<int,int>>> adjlist;
    for(int i = 0 ; i < edges.size() ; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];
        adjlist[u].push_back({v,w});
    }
    //step1 find topological sort
    stack<int> st;
    unordered_map<int,bool> visited;
    dfs(0,adjlist,visited,st);
    vector<int> toposort;
    while(!st.empty()){
        toposort.push_back(st.top());
        st.pop();
    }
    vector<int> distance(n,INT_MAX);
    distance[0] = 0;
    for(int i = 0 ; i < toposort.size() ; i++){
        int u = toposort[i];
        if(distance[u]==INT_MAX) continue;
        for(auto neighbour : adjlist[u]){
            int v = neighbour.first;
            int w = neighbour.second;
            distance[v] = min(distance[v],distance[u]+w);
        }
    }
    for(int i = 0 ; i < distance.size() ; i++){
        if(distance[i]==INT_MAX){
            distance[i] = -1;
        }
    }
    return distance;


}
