#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void solve(unordered_map<int,vector<int>> &adjlist,int &timer,int node,vector<int> &disc,vector<int> &mindisc,vector<bool> &visited,int parent,vector<bool> &ap){
        disc[node] = mindisc[node] = timer++;
        visited[node] = true;
        int child = 0;
        for(auto neighbour : adjlist[node]){
            if(neighbour==parent){
                continue;
            }
            if(!visited[neighbour]){
                solve(adjlist,timer,neighbour,disc,mindisc,visited,node,ap);
                mindisc[node] = min(mindisc[node],mindisc[neighbour]);
                //checking for articulation point
                if(mindisc[neighbour]>=disc[node] && parent!=-1){
                    ap[node] = true;
                }
                child++;
            }
            else{
                mindisc[node] = min(mindisc[node],mindisc[neighbour]);
            }
        }
        if(child>1 && parent==-1){
            ap[node] = true;//for root node
        }
    }
    vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> adjlist;
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        vector<int> disc(V,-1);
        vector<int> mindisc(V,-1);
        vector<bool> visited(V,0);
        int parent = -1;
        vector<bool> ap(V,0);
        int timer = 0;
        for(int i = 0 ; i < V ; i++){
            if(!visited[i]){
                solve(adjlist,timer,i,disc,mindisc,visited,parent,ap);
            }
        }
        vector<int> ans;
        for(int i = 0 ; i < V ; i++){
            if(ap[i]){
                ans.push_back(i);
            }
        }
        if(ans.empty()) return {-1};
        return ans;
    }
};