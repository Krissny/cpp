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


int main(){
    // creating a node 
    Node* root = new Node(8); // kinda like creating head in LL
    root->left = new Node(5);
    root->right = new Node(12);
	root->left->left = new Node(4);
	root->left->right = new Node(7);
	root->right->left = new Node(10);
	root->right->right = new Node(14);  
	int ans = FloorValue(root, 6);
	if(ans==INT_MIN) cout<<"Not found"<<endl;
	else{
		cout<<ans<<endl;
	}
}