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
//serialize
string serilaise(Node* root){
	queue<Node*>q;
	q.push(root);
	string s ="";
	while(!q.empty()){
		Node* node = q.front();
		q.pop();
		if(node==NULL) s.append("N,");
		else s.append(to_string(node->data)+',');
		if(node!=NULL){
			q.push(node->left);
			q.push(node->right);// we dont need to check whether it is null or not , we have already taken of it in line 24;
		}
	}
	cout<<s<<endl;
	return s;
}
//deseralise
Node* deserialise(string data){
	if(data.size()==0) return NULL;
	stringstream s(data); // this creates a string into objects
	string str;
	getline(s, str, ',');
	Node* root = new Node(stoi(str));
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){ 
		Node* node = q.front();
		q.pop();
		getline(s,str,','); // everytime I do this it moves to the next char in string
		if(str=="N"){
			node->left = NULL;
		}
		else{
			Node* newnode = new Node(stoi(str));
			node->left = newnode;
			q.push(newnode);
		}
		getline(s, str, ',');
		if(str=="N"){
			node->right == NULL;
		}
		else{
			Node* newnode = new Node(stoi(str));
			node->right = newnode;
			q.push(newnode);
		}
	}
	return root;
}
//traverse
void Preorder(Node* root){  // time complexity is O(N)->as the recursion will run for n nodes
    if(root == NULL){  // space complexity, aux space of height of the tree can be O(n)->worst case
        return;
    }
    //a simple recursive code , do  adry run to understand
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
int main(){
    // creating a node 
    Node* root = new Node(1); // kinda like creating head in LL
    root->left = new Node(2);
    root->right = new Node(3);
	string s = serilaise(root);
	Node* ans = deserialise(s);
	Preorder(ans);
}
