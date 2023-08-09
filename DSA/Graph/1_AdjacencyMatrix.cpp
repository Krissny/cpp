#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    int adj[n+1][n+1]; // for 0 based indexing
    for(int i=0; i<m; i++){ // as there will be m lines
        int u ,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    } 
    //the space complexity of taking input is O(N*N)
}