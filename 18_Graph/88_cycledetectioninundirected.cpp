#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
bool bfs(unordered_map<int,vector<int>> &adjlist,int i,unordered_map<int,bool> &visited){
    queue<int> q;
    unordered_map<int,int> parent;
    q.push(i);
    visited[i] = 1;
    parent[i] = -1;
    while(!q.empty()){
        int frnt = q.front();
        q.pop();
        for(auto neighbour : adjlist[frnt]){
            if(visited[neighbour] && parent[frnt]!=neighbour) return true;
            if(!visited[neighbour]){
                q.push(neighbour);
                parent[neighbour] = frnt;
                visited[neighbour] = 1;
            }

        }
    }
    return false;
}
bool dfs(unordered_map<int,vector<int>> &adjlist,int i,unordered_map<int,bool> &visited,unordered_map<int,int> &parent){
    visited[i] = 1;
    for(auto neighbour : adjlist[i]){
        if(!visited[neighbour]){
            parent[neighbour] = i;
            bool iscycle = dfs(adjlist,neighbour,visited,parent);
            if(iscycle) return true;
        }
        else if(parent[i]!=neighbour){
            return true;
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int,vector<int>> adjlist;
    for(int i = 0 ; i < m ; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    unordered_map<int,bool> visited;
    //to handle disconnected components
    for(int i = 1 ; i <= n ; i++){
        if(!visited[i]){
            bool isfound = bfs(adjlist,i,visited);
            // bool isfound = dfs(adjlist,i,visited);
            if(isfound) return "Yes";
        }
     
    }
    return "No";
}
