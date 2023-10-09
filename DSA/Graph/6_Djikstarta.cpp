#include <bits/stdc++.h>
using namespace std;

vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        // priority_queue<pair<int, int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(V, INT_MAX);
        dist[S] = 0;
        pq.push({0,S});
        
        while(!pq.empty()){
            int node = pq.top().second;
            int dis = pq.top().first;
            pq.pop();
            
            for(auto it : adj[node]){
                int w = it[1];
                int v = it[0];
                
                if(dis + w < dist[v]){
                    dist[v] = dis + w;
                    pq.push({dis+w, v});
                }
            }
        }
        return dist;
    }

    int main(){
        
    }