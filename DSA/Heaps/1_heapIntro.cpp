//Heap :- Heap is basically a binary tree data structure
//Heap : A Complete binary tree that satisfies a heaps property.
// there are two types of heaps
// ** Max heaps **
 /*the children of nodes are smaller than the nodes*/

//** Min heaps **
/* the children of nodes are bigger than the nodes*/

//why complete binary tree? (look at line 2)
//A complete binary tree of n nodes will have a height of log n
//(refer to notes for more)
#include <iostream>
#include <queue> // priority queue lies in this library
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(8);  // by default the priority queue is max heap
    pq.push(9);
    pq.push(2);
    pq.push(12);
    cout<<pq.size()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    // if you want to implement a min heap with priority queue , just push the values as negative
    //also
    //priority_queue<Node*,vector<Node*>,cmp> pq;
    // struct cmp{
    //     bool operator()(Node* l , Node* r){
    //         return l->data > r->data;
    //     }
    // };
}