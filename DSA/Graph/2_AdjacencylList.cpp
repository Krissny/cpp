#include <bits/stdc++.h>
using namespace std;

//Undirected Graph
//Ajacency Array Storage
//here the space complexity is O(2E)
int main(){
    int n, m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i =0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // we dont need to do this in directed graph
    }
    return 0;
    //In a directed graph the adjacency list/array space complexity is reduced to O(2E)
}