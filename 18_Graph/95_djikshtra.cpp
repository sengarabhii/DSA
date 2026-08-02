#include <bits/stdc++.h> 
using namespace std;
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int,vector<pair<int,int>>> adjlist;
    for(int i = 0 ; i < vec.size() ; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        adjlist[u].push_back({v,w});
        adjlist[v].push_back({u,w});
    }
    vector<int> distance(vertices,INT_MAX);
    set<pair<int,int>> st;
    st.insert({0,source});//form (distance,node)
    distance[source] = 0;
    while(!st.empty()){
        auto it = st.begin();
        pair<int,int> p = *it;
        st.erase(it);
        int u = p.second;
        int dist = p.first;
        for(auto neighbour : adjlist[u]){
            int v = neighbour.first;
            int w = neighbour.second;
            if(dist+w < distance[v]){
                distance[v] = dist+w;
                st.insert({distance[v],v});
            }
        }
    }
    return distance;
}
