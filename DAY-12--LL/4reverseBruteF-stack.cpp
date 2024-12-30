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


//Brute Force.. sing stack..TC-0(2N), SC-0(N)-coz stack
Node* ReverseLL(Node* &head){
    stack<int> st;
    //creating temp ptr for opr of iteration
    Node* temp = head;

    //for pushing in stack
    while(temp !=NULL){
        st.push(temp->data);
        temp= temp->next;
    }

    //again point temp to head..
    temp = head;

    //for taking out of stack
    while(temp!=NULL){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
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