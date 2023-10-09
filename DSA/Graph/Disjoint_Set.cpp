#include <bits/stdc++.h>
using namespace std;

// creating a class for disjoint  set ds
class DisjointSet{
    vector<int> rank, parent, size;
public:
    //constructor
    DisjointSet(int n){
        rank.resize(n+1, 0);
        size.resize(n+1, 1);
        parent.resize(n+1);
        for(int i=0; i<=n; i++){
            parent[i]=i;
        }
    }
    //path compression
    int findUPar(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }
    // union by rank
    void unioByRank(int u, int v){
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if(ulp_u==ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v]= ulp_u; // rank only incrases if they have same rank
            rank[ulp_u]++;
        }
    }

    void unioBySize(int u, int v){
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if(ulp_u==ulp_v) return;
        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v]+= size[ulp_u];
        }
        else {
            parent[ulp_v]= ulp_u;
            size[ulp_u]+= size[ulp_v];
        }
    }
};

int main(){
    DisjointSet ds(7);
    ds.unioBySize(1,2);
    ds.unioBySize(2,3);
    ds.unioBySize(4,5);
    ds.unioBySize(6,7);
    ds.unioBySize(5,6);
    // if 3 and 7 belong to same or not
    if(ds.findUPar(3)==ds.findUPar(7)){
        cout<<"Same\n";
    }
    else {
        cout<<"Not Same\n";
    }
    ds.unioByRank(3,7);
     if(ds.findUPar(3)==ds.findUPar(7)){
        cout<<"Same\n";
    }
    else {
        cout<<"Not Same\n";
    }
    return 0;
}