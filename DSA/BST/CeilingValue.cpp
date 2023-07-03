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

int ceilingValue(Node* root, int key){
	int ceil = INT_MAX;
	while(root!=NULL){
		if(root->data == key){
			return root->data;
		}
		else if(root->data > key){
			ceil = min(ceil,root->data );
			root = root->left;
		}
		else{
			root = root->right;
		}
	}
	return ceil;
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
	int ans = ceilingValue(root, 6);
	if(ans==INT_MAX) cout<<"Not found"<<endl;
	else{
		cout<<ans<<endl;
	}
}