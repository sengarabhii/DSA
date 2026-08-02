#include<bits/stdc++.h>
using namespace std;
void dfs(int i,unordered_map<int,vector<int>> &adjlist,vector<int> &onecmp,unordered_map<int,bool> &visited){
    onecmp.push_back(i);
    visited[i] = 1;
    for(int j = 0 ; j < adjlist[i].size() ; j++){
        int u = adjlist[i][j];
        if(!visited[u]){
            dfs(u,adjlist,onecmp,visited);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<vector<int>> ans;
    unordered_map<int,bool> visited;
    unordered_map<int,vector<int>> adjlist;
    for(int i = 0 ; i < edges.size() ; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    for(int i = 0 ; i < V ; i++){
        if(!visited[i]){
            vector<int> onecmp;
            dfs(i,adjlist,onecmp,visited);
            ans.push_back(onecmp);
        }
    }
    return ans;
}