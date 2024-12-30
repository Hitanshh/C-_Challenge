//Node, data, next, Node pointer, connect node, display
//LL- data structure with non contagious memory loc.
//contains Nodes with data and addr to next
// it dynamically allocates the memory by : 
// Node* a = new Node(..);
// for static allocation:
// Node a 


#include <bits/stdc++.h>
using namespace std;

struct Node{  // struct is same as the class
// in struct other 4 oops feature not supported
    public:
    int data;
    Node* next;      // dynamically creating next ptr

    //this is how the node is created..
    Node(int data1, Node* next1){  //constructor
        data = data1;
        next = next1;
    }

    //for a full node, we can also create a node with predefined nullptr
    Node(int data1 ){  // again constructor
        data = data1;
        next = nullptr;
    }

};

int main(){
    Node* first = new Node(1, nullptr);
    Node* second = new Node(2, first);
    //Now it is like.. second->first->null
    Node* third = new Node(3,nullptr);
    Node* fourth;
    //or we can manually connect nodes like..
    first->next= third;
    //Now it is like.. second->first->third->NULL

    //let's create a pointer temp, and point to first 
    cout<<endl<<"temp loop : "<<endl;
    Node* temp = second;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    // this is how statically memory is allocated, but this is not a node, it's just an object
    Node a(2, nullptr);
    cout<<endl<<"Data of a : "<<a.data<<endl;

    return 0;
}