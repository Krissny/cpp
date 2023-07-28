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

TreeNode *construct(TreeNode* &head,int n){
    if(n<=0 or head==NULL) return NULL;
    TreeNode *left = construct(head, n/2);
    TreeNode *root = head;
    root->left = left;
    head = head->right;
    root->right =construct(head, n-(n/2)-1);
    return root;
}