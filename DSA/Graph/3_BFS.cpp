#include <bits/stdc++.h>
using namespace std;
//We will be writing the solution for undirected graph
//and this soltion will also work for directed graph
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        //lets set up the the visited array
        // As it is a 0 based indexing , so the size is "V"
        //if it has been 1 based , the size would have been "V+1"
        int vis[V] = {0};
        vis[0] =1;
        queue<int>q;  // queue
        q.push(0);
        vector<int>bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] =1;
                    q.push(it);
                }
            }
        }
        return bfs;
}
//The space complexity is O(3*N) , 3 because , 1.queue 2.vis array 3. the bfs vector
//time complexity : - so every node is pushed and popped only once -> that means our 
//while loop runs for a total of N times(No of nodes)
// and our inner for loops runs for total no of degrees of the graph
// so the final time complexity is -> O(N) + O(2E)

int main(){

}