//Middle of LL (Brute Force)

// count no. of elements, by looping temp=temp->next
//then find mid = (count/2) + 1;
// again run loop till.. mid!=0, and do m--;
// also do temp=temp->next, then return the temp->data;

#include <bits/stdc++.h>
using namespace std;

struct Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* MiddleOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp ->next;
    }
    int mid = (count/2) +1;
    temp = head;
    while(mid){
        mid--;
        if(mid==0) {return temp;}
        temp = temp ->next;
    }
}

int main(){
    //initializing nodes of linked list..
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);

    //connecting nodes..
    head->next = first;
    first->next = second;
    second->next = third;

    //finding middle of Linked list..
    Node* ans = MiddleOfLL(head);
    cout<<ans->data;


    return 0;
}