#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> adj[], int vis[],vector<int> &ls){
    vis[node] = 1;
    ls.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    int vis[V] = {0};// it is a zero based indexing
    vector<int> ls;
    int start = 0; //starting node;
    dfs(start,adj,vis,ls);
    return ls;
}

//Space comlexity -> O(N){for vis array} + O(N){for the ls} + O(N){for the stack space} ~= O(N)
//Time complexity -> (O(N) + 2E)

int main(){

}