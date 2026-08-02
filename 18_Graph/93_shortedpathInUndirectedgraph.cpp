#include<bits/stdc++.h>
using namespace std;
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	unordered_map<int,vector<int>> adjlist;
	unordered_map<int,bool> visited;
	unordered_map<int,int> parent;
	for(int i = 0 ; i < edges.size() ; i++){
		int u = edges[i].first;
		int v = edges[i].second;
		adjlist[u].push_back(v);
		adjlist[v].push_back(u);
	}
	queue<int> q;
	q.push(s);
	visited[s] = true;
	parent[s] = -1;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(auto neighbour : adjlist[node]){
			if(!visited[neighbour]){
				visited[neighbour] = 1;
				parent[neighbour] = node;
				q.push(neighbour);
			}
		}
	}
	vector<int> ans;
	while(parent[t]!=s){
		ans.push_back(t);
		t = parent[t];
	}
	ans.push_back(t);
	ans.push_back(s);
	reverse(ans.begin(),ans.end());
	return ans;
}
