//Insertion in a singly linked list..

#include <bits/stdc++.h>
using namespace std;

struct Node{
    public: 
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

//Insertion at the end..

void InsertionAtEnd(Node* &head, int data1){
    Node* newNode = new Node(data1);

    if(head == NULL){    // empty linkedList condition
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp->next = newNode;
    // newNode->next = nullptr;
    // constructor me already defined h 

}

void Display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"  -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}




int main(){
    
    Node* first = new Node(10, nullptr);
    Node* second = new Node(30);
    first->next = second;
    second ->next = NULL;
    InsertionAtEnd(first, 20);
    Display(first);
    return 0;
}