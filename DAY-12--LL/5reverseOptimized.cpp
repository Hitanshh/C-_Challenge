//Reverse a Linked List..
#include <bits/stdc++.h>
#include<stack>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = NULL;
    }
};

//OptimizedApproach.. TC-0(N), SC-0(N)
Node* ReverseLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    
    while(curr != NULL){

        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

    }
    head = prev;
    return head;
}



void Display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    cout<<endl<<"BEFORE"<<endl;
    Display(head);
    cout<<endl<<"AFTER"<<endl;
    Display(ReverseLL(head));
    // cout<<endl;
    // cout<<" ";
    return 0;
}