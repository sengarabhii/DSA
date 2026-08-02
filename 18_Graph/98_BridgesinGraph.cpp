#include<bits/stdc++.h>
using namespace std;
void dfs(unordered_map<int,vector<int>> &adjlist,vector<int> &disc,vector<int> &lowdisc,unordered_map<int,bool> &visited,int parent,vector<vector<int>> &ans,int node,int &timer){
    visited[node] = true;
    lowdisc[node] = disc[node] = timer++;

    for(auto neighbour : adjlist[node]){
        if(neighbour==parent){
            continue;
        }
        if(!visited[neighbour]){
            dfs(adjlist,disc,lowdisc,visited,node,ans,neighbour,timer);
            lowdisc[node] = min(lowdisc[node],lowdisc[neighbour]);
            //checking bridge edge
            if(lowdisc[neighbour]>disc[node]){
                ans.push_back({node,neighbour});
            }

        }
        else{//visited and not parent
            //back edge
            lowdisc[node] = min(lowdisc[node],lowdisc[neighbour]);

        }
    }


}
vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    unordered_map<int,vector<int>> adjlist;
        for(int i = 0 ; i < edges.size() ; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        
        vector<vector<int>> ans;

        vector<int> disc(v,-1);
        vector<int> lowdisc(v,-1);
        unordered_map<int,bool> visited;
        int parent = -1;
        int timer = 0;
        for(int i = 0 ; i < v ; i++){
            dfs(adjlist,disc,lowdisc,visited,parent,ans,0,timer);
        }
        return ans;

}