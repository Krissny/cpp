// inorder to solve problems on tree , you need to be able to traverse the tree
// There are basically two texhniques DFS and BFS
//DFS(Depth First Search)-> It can be further divided into three types
//1. Inorder traversal(left , root, right)
//2. Preorder Traversal (root, left, right)
//3. Post-Order traversal (left , right, root)
//BFS(Breadth first traversal) ->this is the easier one
// 1. as the name sauggest , we take or print the tree level by level
#include <bits/stdc++.h>
using namespace std;
//Node
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    //constructor
    Node(int val){
        data = val;
        left= NULL;
        right = NULL;
    }
};

//Preorder
void Preorder(Node* root){  // time complexity is O(N)->as the recursion will run for n nodes
    if(root == NULL){  // space complexity, aux space of height of the tree can be O(n)->worst case
        return;
    }
    //a simple recursive code , do  adry run to understand
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
//Inorder travesal
//Recursion is more suitable for binary trees as we have to go down and come back
void Inorder(Node* root){
    if(root==NULL){
        return;
    }
    // You can draw a tree if it confuses you 
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
//Postorder
void Postorder(Node* root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    Inorder(root->right);
    cout<<root->data<<" ";
}
//Level order traverse , more like BFS
// It requires a queue data structure
void Leveltraversal(Node* root){  // look in notes for more
    if(root==NULL){
        cout<<"TREE IS EMPTY!!!"<<endl;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i=0; i<size; i++){
            Node* toprint = q.front();
            q.pop();
            if(toprint->left!=NULL) q.push(toprint->left);
            if(toprint->right!=NULL) q.push(toprint->right);
            cout<<toprint->data<<" ";
        }
    }
}
// 


int main(){
    // creating a node 
    Node* root = new Node(1); // kinda like creating head in LL
    root->left = new Node(2);
    root->right = new Node(3);
    Preorder(root);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    Postorder(root);
    cout<<endl;
    Leveltraversal(root);
}
 