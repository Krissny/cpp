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

void ConvertToDLL(TreeNode*root,TreeNode* &head){  // converting to doubly linked list
    if(root==NULL){
        return ;
    }
    ConvertToDLL(root->right, head);
    root->right = head;
    if(head) head->left = root;
    head = root;
    ConvertToDLL(root->left, head);
}