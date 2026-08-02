//step1 find topological order
//step2 transpose graph
//step3 count comp by visiting
#include<bits/stdc++.h>
using namespace std;
void topologicalSort(unordered_map<int,vector<int>> &adjlist,int node,unordered_map<int,bool> &visited,vector<int> &ts){
	visited[node] = true;
	for(auto nbr : adjlist[node]){
		if(!visited[nbr]){
			topologicalSort(adjlist,nbr,visited,ts);
		}
	}
	ts.push_back(node);
}
void dfs(unordered_map<int,vector<int>> &adjlist,unordered_map<int,bool> &visited,int node){
	visited[node] = true;
	for(auto nbr : adjlist[node]){
		if(!visited[nbr]){
			dfs(adjlist,visited,nbr);
		}
	}
}
int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	unordered_map<int,vector<int>> adjlist;
	unordered_map<int,vector<int>> transpose;
	for(auto edge : edges){
		int u = edge[0];
		int v = edge[1];
		adjlist[u].push_back(v);
		transpose[v].push_back(u);
	}
	unordered_map<int,bool> visited;
	vector<int> ts;
	for(int i = 0 ; i < v ; i++){
		if(!visited[i]){
			topologicalSort(adjlist,i,visited,ts);
		}
	}
	reverse(ts.begin(),ts.end());
	visited.clear();
	int cnt = 0;

	for(int node : ts){
		if(!visited[node]){
			dfs(transpose,visited,node);
			cnt++;
		}
	}
	return cnt;
}