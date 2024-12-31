//Find the point from where loop starts..
//whi FCD chalao.. slow and fast wali, if slow==fast hota h toh fir slow ko head se initialize krdo and fast ka increament bhi 1 se kardo, agar firse slow==fast hoga toh whi point h (Node h) jaha se loop start hua h

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


int PointFromWhereLoopStarts(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast!= NULL && fast->next!=NULL){
        slow = slow->next;         // inc by 1
        fast = fast->next->next;   // inc by 2
        if(slow == fast){
            slow=head;
            while(fast!= NULL && fast->next!=NULL){
            slow=slow->next;
            fast = fast->next;
            if(slow==fast) return slow->data;
            }
        }
    }
    return -1;
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
    cout<<PointFromWhereLoopStarts(head);
    
    return 0;
}