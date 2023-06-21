#include <bits/stdc++.h>
using namespace std;
//insering at head

class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        if(this->next!= NULL){
            this->next= NULL;
            delete this;
        }
        cout<<"memory for value "<<value<<" is free"<<endl;
    }
};
//Deletion

void deleteNode(Node* &head,Node* &tail, int pos){  // remember to pass head as reference

    //to delete the first or start node
    if(pos==1){
        Node* temp= head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle or last node
        Node* prev = NULL;
        Node* curr = head;
        int cnt =1;
        while(cnt<pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr->next==nullptr){
            prev->next = curr->next;
            tail = prev;
            delete curr;
            return;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
//Insertion
void InsertAtTail(Node* &tail, int d){  // remember to pass it by reference
    Node* temp = new Node(d);

    tail->next = temp;  // we tool the tail which was intially pointing to the null ptr and ppinted in to the temp
    tail = temp;  // now we shift our tail to next which can also be written as  tail=tail->next
}

void InsertAtHead(Node* &head, int d){ // passed as a reference because we dont want to create a copy
    //created a new Node
    Node *temp = new Node(d);
    // pointed it  to what head was pointing which was null
    temp->next= head; 
    // and pointed head to temp   |head|->|prev node|->null . head becomes temp
    head = temp;

}
void InsertAtPosition(Node* &tail,Node* &head,int pos,int d){
    if(pos==1){  // inserting at begining 
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt =1;
    while(cnt < pos -1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==nullptr){ //inserting at end
        InsertAtTail(tail,d);
        return;
    }
    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void print(Node* &head){  // we can pass it as a copy also
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main() {
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;  // as the linked list is single linked list so it has a single node
    print(head);
    InsertAtTail(tail,12);
    print(head);
    InsertAtTail(tail,15);
    print(head);
    InsertAtPosition(tail, head, 3, 19);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    deleteNode(head, tail,4);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    print(head);
    
}
