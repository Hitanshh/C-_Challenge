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

//BruteForce.. using map.. tc-0(N*2longN), Sc-0(N)
//tc--> N for the loop and 2*logN for find n insert
bool CheckLoop(Node* &head){
    //map to store Node* coz data can be repeated in normal LL but whole node is unique always.. 
    map<Node*, int> mp;
    //create a temporary pointer..
    //and iterrate in LL, put the Node in Map, and if the Node repeats.. return true-> loop found
    Node* temp = head;
    while(temp!=NULL){
        if(mp[temp]){
            return true;
        }
        mp[temp]=1;
        temp = temp->next;
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
    cout<<CheckLoop(head);
    
    return 0;
}