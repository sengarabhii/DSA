#include<bits/stdc++.h>
using namespace std;
bool dfs(unordered_map<int,list<int>> &adjlist,int i,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsVisited){
  visited[i] = 1;
  dfsVisited[i] = 1;
  for(auto neighbour : adjlist[i]){
    if(!visited[neighbour]){
      bool iscycle = dfs(adjlist,neighbour,visited,dfsVisited);
      if(iscycle) return true;
    }
    else if(dfsVisited[neighbour]){
      return true;
    }
  }
  dfsVisited[i] = false;
  return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  unordered_map<int,list<int>> adjlist;
  for(int i = 0 ; i < edges.size() ; i++){
    int u = edges[i].first;
    int v = edges[i].second;
    adjlist[u].push_back(v);
  }
  unordered_map<int,bool> visited;
  unordered_map<int,bool> dfsVisited;
  for(int i = 1 ; i <= n ; i++){
    if(!visited[i]){
      bool iscycle = dfs(adjlist,i,visited,dfsVisited);
      if(iscycle) return 1;
    }
  }
  return 0;
}