#include <bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int,vector<int>> adjlist;
    vector<int> indegree(v,0);
    int start = 0;
    for(int i = 0 ; i < edges.size() ; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adjlist[u].push_back(v);
        indegree[v]++;
    }
    vector<int> ans;
    queue<int> q;
    for(int i = 0 ; i < v ; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto neighbour : adjlist[node]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }
    }
    return ans;
}