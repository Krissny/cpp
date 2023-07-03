#include <bits/stdc++.h>
using namespace std;

class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

TreeNode<int> *construct(TreeNode<int> *&head,int n){
    if(n<=0 or head==NULL) return NULL;
    TreeNode<int> *left = construct(head, n/2);
    TreeNode<int> *root = head;
    root->left = left;
    head = head->right;
    root->right =construct(head, n-(n/2)-1);
    return root;
}