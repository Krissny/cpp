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

TreeNode*mergeList(TreeNode* head1 , TreeNode* head2){
    TreeNode* head =NULL;  // for our new linked list, (new merged arary)
    TreeNode* tail = NULL;
    while(head1!=NULL and head2!=NULL){
        if(head1->data <= head2->data){
            if(head==NULL){  // if nothing is added till now
                head = head1;
                tail = head1;
                head1= head1->right;  // moving the first LL pointer ahead
            }
            else{  // that means we would be insertinf at end or tail
                tail ->right = head1;   // moving the head ahead
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else{
            if(head==NULL){  // if nothing is added till now
                head = head2;
                tail = head2;
                head2= head2->right;  // moving the second LL pointer ahead
            }
            else{
                tail ->right = head1;   // moving the head ahead
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }
    while(head1!=NULL ){
        tail ->right = head1;   // moving the head ahead
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    while(head2!=NULL ){
        tail ->right = head2;   // moving the head ahead
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }
}