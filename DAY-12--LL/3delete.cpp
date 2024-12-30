//Deletion in a singly linked list..

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

//Deletion from the end..

void Deletion(Node* &head, int val){
    
    if(head == NULL){    // empty linkedList condition
        return;
    }

    // if the node to be deleted is head
    if(head->data == val){
        Node* toDelete = head;
        head = head -> next;
        delete toDelete;
        return ;
    }

    Node* temp = head;
    while(temp->next != NULL && temp->next->data!=val){
        temp= temp->next;
    }
    if(temp->next == NULL){
        return; //Value not present
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
    return;

}

void Display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}




int main(){
    
    Node* first = new Node(10, nullptr);
    Node* second = new Node(30);
    first->next = second;
    second ->next = NULL;
    Deletion(first, 30);
    Display(first);
    return 0;
}