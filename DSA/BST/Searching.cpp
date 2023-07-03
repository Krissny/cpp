#include <bits/stdc++.h>
using namespace std;
//binary search trees
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

Node* Search(Node* root, int value){
	while(root!=NULL){
		// cout<<root->data<<endl;
		if(root->data == value){
			return root;
		}
		else if (root->data > value){
			root = root->left;
		}
		else{
			root= root->right;
		}
	}
	return NULL;
}

int main(){
    // creating a node 
    Node* root = new Node(8); // kinda like creating head in LL
    root->left = new Node(5);
    root->right = new Node(12);
	root->left->left = new Node(4);
	root->left->right = new Node(7);
	root->right->left = new Node(10);
	root->right->right = new Node(14);  
	Node* ans = Search(root, 10);
	if(ans==NULL) cout<<"Not found"<<endl;
	else{
		cout<<ans->data<<endl;
	}
}