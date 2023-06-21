#include <bits/stdc++.h>
using namespace std;
//Doubly Linked list
//  Null <-|prev|data|next| -> <-|prev|data|next| -> <-|prev|data|next| -> Null  (doubly linked list)
// |data|next|->|data|next|->|data|next|->|data|next|-> (singly linked list)

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            this->next =NULL;
            delete this;
        }
        cout<<"Node for data "<<value<<" is free"<<endl;
    }
};

void deleteNode(Node* &head,Node* &tail, int pos){  // remember to pass head as reference

    //to delete the first or start node
    if(pos==1){
        Node* temp= head;
        temp->next->prev = NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle or last node
        Node* pre = NULL;
        Node* curr = head;
        int cnt =1;
        while(cnt<pos){
            pre = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr->next==nullptr){
            pre->next = curr->next;
            curr->prev = NULL;
            tail = pre;
            delete curr;
            return;
        }
        pre->next = curr->next;
        curr->next->prev = pre;
        curr->prev= NULL;
        curr->next = NULL;
        delete curr;
    }
} 

void InsertAtTail(Node* &tail,Node* &head, int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node * temp = new Node(d);
        tail ->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void InsertAtHead(Node* &tail, Node* &head , int d ){
    if(head==NULL){  // modification as intially our head and tail are null
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);  // ek node create kiye
        temp->next = head;   // uske next ko headd ki taraf point kar diya
        head->prev = temp; // head k prev ko temp ki taraf point kaar diya
        head = temp;  // aur head ko uski sahi jagah par le aaya
    }
}
void InsertAtPosition(Node* &head,Node* &tail, int pos, int d){
    if(pos==1){  // inserting at begining 
        InsertAtHead(tail,head,d);
        return;
    }
    Node* temp = head;
    int cnt =1;
    while(cnt < pos -1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==nullptr){ //inserting at end
        InsertAtTail(tail,head,d);
        return;
    }
    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}

int getLen(Node* head){  // to get length of linked list
    int cnt =0;
    Node *temp = head;
    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void print(Node* head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    // Node *newNode = new Node(10);  //lets say we want our both head and tail to be null
    Node* head = NULL;
    Node* tail = NULL;
    // print(head);
    // cout<<getLen(head)<<endl;
    InsertAtHead(tail,head, 11);
    print(head);
    InsertAtHead(tail,head,12);
    print(head);
    InsertAtTail(tail,head, 13);
    print(head);
    InsertAtPosition(head,tail,2,100);
    print(head);
    InsertAtPosition(head,tail,1,200);
    print(head);
    InsertAtPosition(head,tail,6,500);
    print(head);
    deleteNode(head, tail, 6);
    print(head);
    
}
