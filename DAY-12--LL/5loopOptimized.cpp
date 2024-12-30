//FLOYED CYCLE DETECTION..
//Using Tortoise and Hare Method..
//TC->0(N).. depends on input, SC->0(1)
// using 2 pointers, slow and fast, slow will increment by 1 and fast will increment by 2, and if they collide it means there's a loop otherwise the condition : (fast!=null && fast->next!=null) will become false and there will be no loop.

//Checking Loops/Cycle in LL

#include <bits/stdc++.h>
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


bool CheckLoopOptimized(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast!= NULL && fast->next!=NULL){
        slow = slow->next;         // inc by 1
        fast = fast->next->next;   // inc by 2
        if(slow == fast){
            return true;
        }
    }
    return false;
}


int main(){
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);

    //connecting node..
    head->next = first;
    first->next = second;
    second->next = third;

    //checking loop:
    cout<<CheckLoopOptimized(head);
    
    return 0;
}