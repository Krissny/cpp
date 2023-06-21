#include <iostream>
using namespace std;
// Circular link list
// in circular linked list there is not a head or tail
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            this->next = NULL;
            delete this;
        }
        cout<<"memory for value "<<value<<" is free"<<endl;
    }
};

//Deletion
void deleteNode(Node* &tail , int element){
    if(tail==NULL){
       cout<<"List is Empty!!" <<endl;
    }
    else{
        Node* prev = tail;
        Node* curr =prev->next;
        while(curr->data!=element){
            prev = curr;
            curr = curr->next;
        }
        //Only one node left in the list
        if(curr==prev){
            tail=NULL;
        }
        // when only two nodes are left and the node to be deleted is tail
        else if (tail==curr){ 
            tail=prev;
        }
        prev->next = curr->next;
        curr->next= NULL;
        delete curr;
    }
}

void InsertNode(Node* &tail, int element , int d) {
    //assuming the the element is present in the list
    
    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //Non empty list
        Node *current = tail;
        while(current->data!=element){
            current = current->next;
        }
        //current is represting the element node after exiting while loop;
        Node* temp = new Node(d);
        temp->next = current->next;
        current->next = temp;
    }
}
void print (Node* tail){
    Node* temp = tail;
    if(tail==NULL){
        cout<<"List is empty!!"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail-> next;
    }while(tail!=temp);
    cout<<endl;
}

int main(){

    Node *tail = NULL;
    //empty list
    InsertNode(tail, 5, 3);
    print(tail);
    // InsertNode(tail, 3, 5);
    // print(tail);
    // InsertNode(tail, 5, 7);
    // print(tail);
    // InsertNode(tail, 7, 9);
    // print(tail);
    // InsertNode(tail, 5, 6);
    // print(tail);
    // InsertNode(tail, 9, 10);
    // print(tail);
    // InsertNode(tail, 3, 5);
    // print(tail);
    // deleteNode(tail,5);
    // print(tail);
    deleteNode(tail,3);
    print(tail);

}