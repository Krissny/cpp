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
// The time complexity is near about O(n), the tc is atomized
//Morris Treaversal(Inorder)
vector<int> getInorder(Node* root){
	vector<int>inorder; // to return answer
	Node* curr = root;
	while(curr!=NULL){
		// first case, there is not a left 
		if(curr->left ==NULL){
			inorder.push_back(curr->data);
		}
		else{
			// so there exist a left, ie second case
			Node *prev = curr->left;
			while(prev->right && prev->right!=curr){ // so if there is a right and its not pointing to itself
				prev = prev->right;
			}
			// when prev comes out of it , there will be two cases
			if(prev->right ==NULL){ // actually marking the thread
				prev->right = curr;
				curr = curr->left;
			}
			else{ //prev->right ==curr
				prev->right = NULL;
				inorder.push_back(curr->data); // we have pushed above also but it has a condition
				curr= curr->right; // so we came back
			}
		}
	}
}
//so what can be preorder
// inorder:-> left root right
//Preorder :-> root left right
// so instead of printin the node when we comeback to it
//if we print it while marking it 
//Morris Treaversal(Inorder)
vector<int> getInorder(Node* root){
	vector<int>inorder; // to return answer
	Node* curr = root;
	while(curr!=NULL){
		// first case, there is not a left 
		if(curr->left ==NULL){
			inorder.push_back(curr->data);
		}
		else{
			// so there exist a left, ie second case
			Node *prev = curr->left;
			while(prev->right && prev->right!=curr){ // so if there is a right and its not pointing to itself
				prev = prev->right;
			}
			// when prev comes out of it , there will be two cases
			if(prev->right ==NULL){ // actually marking the thread
				prev->right = curr;
				inorder.push_back(curr->data);
				curr = curr->left;
			}
			else{ //prev->right ==curr
				prev->right = NULL;
				// inorder.push_back(curr->data); // we have pushed above also but it has a condition
				curr= curr->right; // so we came back
			}
		}
	}
}

int main(){
    // creating a node 
    Node* root = new Node(1); // kinda like creating head in LL
    root->left = new Node(2);
    root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	Node* fifth = root->left->right;
	fifth->right = new Node(6);

}