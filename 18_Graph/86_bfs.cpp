#include<bits/stdc++.h>
using namespace std;
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    queue<int> q;
    set<int> st;
    q.push(0);
    vector<bool> visited(n,0);
    visited[0] = 1;
    vector<int> ans;
    while(!q.empty()){
        int frnt = q.front();
        ans.push_back(frnt);
        q.pop();
        for(int i = 0 ; i < adj[frnt].size() ; i++){
            int node = adj[frnt][i];
            if(visited[node]==0){
                q.push(node);
                visited[node] = 1;;
            }
        }
    }
    return ans;
}