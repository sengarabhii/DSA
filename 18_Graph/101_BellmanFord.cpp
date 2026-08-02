//this algorithm is used for finding sortest path from one node to all other, in dijkstra's there's exception that it doesn't work on negative edges
//time complexity O(n*m)
//it can also be used to detect negative weight cycle by running loop one more time and if distance of any node updated it means there exists a negative weight cycle

#include<bits/stdc++.h>
using namespace std;
int bellmonFord(int n, int m, int src,int dest, vector<vector<int>> &edges) {
    vector<int> dist(n+1,INT_MAX);
    dist[src] = 0;
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];
            if(dist[v]>dist[u]+w){
                dist[v] = dist[u]+w;
            }
        }
    }

    //for checking negative weight cycle(i.e. dist at every cycle goes decreasing forever)
    bool flag = false;
    for(int j = 0 ; j < m ; j++){
        int u = edges[j][0];
        int v = edges[j][1];
        int w = edges[j][2];
        if(dist[v]>dist[u]+w){
            flag = true;
            dist[v] = dist[u]+w;
        }
    }
    if(flag) return -1;
    
    return dist[dest];

}
