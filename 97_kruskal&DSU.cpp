#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a,vector<int> &b){
  return a[2] < b[2];
}
void makeSet(vector<int> &parent){
  for(int i = 0 ; i < parent.size() ; i++){
    parent[i] = i;
  }
}
int findParent(vector<int> &parent,int node){
  if(parent[node]==node){
    return node;
  }
  return parent[node]=findParent(parent,parent[node]);//path compression
}
void Union(vector<int> &parent,vector<int> &rank,int u,int v){
  int p1 = findParent(parent,u);
  int p2 = findParent(parent,v);
  if(rank[p1]>rank[p2]){
    parent[p2] = p1;
  }
  else if(rank[p2]>rank[p1]){
    parent[p1] = p2;
  }
  else{
    parent[p2] = p1;
    rank[p1]++;
  }
}
int minimumSpanningTree(vector<vector<int>>& edges, int n)
{
  sort(edges.begin(),edges.end(),cmp);
  vector<int> rank(n,0);
  vector<int> parent(n);
  makeSet(parent);
  int minWeight = 0;
  for(int i = 0 ; i < edges.size() ; i++){
    int u = edges[i][0];
    int v = edges[i][1];
    int w = edges[i][2];
    if(findParent(parent,u)!=findParent(parent,v)){
      minWeight += w;
      Union(parent,rank,u,v);
    }
  }
  return minWeight;
}