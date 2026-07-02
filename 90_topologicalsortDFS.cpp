#include <bits/stdc++.h>
using namespace std;
void dfs(unordered_map<int,vector<int>> &adjlist,vector<int> &visited,int i,stack<int> &st){
    visited[i] = 1;
    for(auto neighbour : adjlist[i]){
        if(!visited[neighbour]){
            dfs(adjlist,visited,neighbour,st);
        }
    }
    st.push(i);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int,vector<int>> adjlist;
    for(int i = 0 ; i < edges.size() ; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adjlist[u].push_back(v);
    }
    vector<int> ans;
    stack<int> st;
    vector<int> visited(v);
    for(int i = 0 ; i < v ; i++){
        if(!visited[i]){
            dfs(adjlist,visited,i,st);
        }
    }
    //or you can push directly into ans then here reverse it if u dont wanna use stack
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}