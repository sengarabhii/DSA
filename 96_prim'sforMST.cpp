#include <bits/stdc++.h>
using namespace std; 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    vector<pair<pair<int, int>, int>> ans;
    unordered_map<int,vector<pair<int,int>>> adjlist;
    for(int i = 0 ; i < g.size() ; i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        adjlist[u].push_back({v,w});
        adjlist[v].push_back({u,w});
    }

    vector<int> key(n+1,INT_MAX);
    vector<bool> mst(n+1,false);
    vector<int> parent(n+1,-1);

    key[1] = 0;
    for(int i = 1 ; i <= n ; i++){
        int u;
        int dist = INT_MAX;
        //finding minimum distance wali node
        for(int node = 1 ; node <= n ; node++){
            if(!mst[node] && key[node]<dist){
                dist = key[node];
                u = node;
            }
        }
        mst[u] = true;
        for(auto neighbour : adjlist[u]){
            int v= neighbour.first;
            int w = neighbour.second;
            if(!mst[v] && key[v]>w){
                key[v] = w;
                parent[v] = u;
            }
        }
    }
    for(int v = 2 ; v <= n ; v++){
        int u = parent[v];
        int w = key[v];
        ans.push_back({{u,v},w});
    }
    return ans;

    
}
