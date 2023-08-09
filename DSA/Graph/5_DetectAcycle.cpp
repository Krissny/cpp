#include <bits/stdc++.h>
using namespace std;
//check the notes to understand this function better
bool detectCycle(int src, vector<int>adj[] , int vis[]){
        vis[src] =1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){  // if it's not visited lets visitit
                    vis[it] =1;
                    q.push({it,node});
                }
                else if(it!=parent){ // and it is visited and it's also not a parent , that means  it is a cycles
                    return true;
                }
            }
        }
        return false;
    }

    // for a connected componenet graph , you just iterate all nodes from 0 to n ,and call bfs on them , making sure they are not already visited
int main(){
    
}