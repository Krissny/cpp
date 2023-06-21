#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* findMid(Node* head)
    {
    
        Node* slow = head;
        Node* fast = head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* merge(Node* a, Node* b)
    {
        if(a==NULL)
        return b;
        if(b==NULL)
        return a;
        Node* p= new Node(-1);// and the new node added to be as this which will be removed while returning the answer
        Node* res = p;  // we store the head as our answer
        while(a!=NULL && b!=NULL)
        {
            if(a->data < b->data)
            {
                p->next = a;  
                p=p->next;
                a=a->next;
            }
            else
            {
                p->next = b;
                p=p->next;
                b=b->next;
            }
        }
        if(a!=NULL)
        p->next = a;
        if(b!=NULL)
        p->next = b;
        return res->next; // instead of returning res , we are returning res->next so that -1 wont count
    }
    
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL)
        return head;
        // we are breaking the linked list in small linked list to pass them in the function
        Node* mid = findMid(head);
        Node* left = head;
        Node* right = mid->next;
        mid->next = NULL;   // here it becomens two linked list head to mid and mid->next to NULL;
        Node* temp1 = mergeSort(left);
        Node* temp2 = mergeSort(right);
        return merge(temp1,temp2);
        
    }
};
