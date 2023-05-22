#include <bits/stdc++.h>
using namespace std;
//implement a stack using queue

struct node{
    int data;
    struct node* next ;
};

struct node* head = nullptr;
void insertAtBegin(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void display(){
    struct node* current = head;
    cout<<"[";
    while(current!=nullptr){
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<"]";
}
int getsize(){
    int size =0;
    struct node* current = head;
    while(current!=nullptr){
        current= current->next;
        size++;
    }
    return size;
}
void insertAtgiven(int pos, int data){
    int size = getsize();
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    if(pos<0 and pos > size){
        cout<<"Invalid position\n";
    }
    else if(pos==0){
        newNode->next = head;
        head = newNode;
    }
    else{
        struct node* current = head;
        while(--pos){
            current=current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

int main() {
   insertAtBegin(1);
   insertAtBegin(2);
   insertAtBegin(3);
   display();
   insertAtgiven(1,6);
   display();
}
