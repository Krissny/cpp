//As we know binary tree is a non-linear ds and are hierachy base
//Binay trees are imp as a lot of questions are asked from binary trees
// root -> the satrting point
// subnodes are called children
//leaf nodes are those who dont have children
// More terms SUBTREE, ANCESTORS
//types :-
//FULL BINARY TREES :- either can have 0 or 2 children
//COMPLETE BINARY TREES :- all levels are completely filled(except last) and 
// all last level are on the  left side(if not completely filled)
// PERFECT BINARY TREE: - All leaf are at same level
//BALANCED BINARY TREE : At max the height of the tree should be log(N) where
//N is no of nodes(BST)
//DEGENERATE TREE :-these tree are straight like linked list, every node has a 
//single children

//NOW we are gonna represent the binary tree
// basically we use nodes to make a binary tree which has two pointers 
// pointing to its left and right
//lets jump to code now

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

int main(){
    // creating a node 
    Node* root = new Node(1); // kinda like creating head in LL
    root->left = new Node(2);
    root->right = new Node(3);
}
