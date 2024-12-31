//Middle of LL (optimized) -> Tortoise & Hare

//Using tortoise and hare algo, ie Floyed Cyc Detection
//point slow and fast at head.. then inc slow-1 & f-2
//when fast reaches NULL==> slow is this mid ele
//or when the fast's next reaches null, slow is at mid


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

Node* MiddleOfLLOptimized(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL )
    //if-> fast->next != NULL && fast!=NULL.. ese likhenge toh problem hogi,
    //coz, agar fast null ho gaya, toh uska next pehle check hoga acc to code, 
    //and next kaha se ayega coz fast hi null h toh segmentation error show hoga,
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
    
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
    Node* ans = MiddleOfLLOptimized(head);
    cout<<ans->data;


    return 0;
}