#include<bits/stdc++.h>
using namespace std;
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    //using bfs(kahn's algo)
    unordered_map<int,vector<int>> adjlist;
    vector<int> indegree(n+1,0);
    for(auto i : edges){
        adjlist[i.first].push_back(i.second);
        indegree[i.second]++;
    }
    int cnt = 0;
    queue<int> q;
    for(int i = 1 ; i < indegree.size() ; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node = q.front();
        cnt++;
        q.pop();
        for(auto neighbour : adjlist[node]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }
    }
    if(cnt==n) return 0;
    else return 1;

}