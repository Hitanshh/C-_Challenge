#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    int a = 0;
    void parent(){
        cout<<"parent";
    }
};

class Child: public Parent{
    public:
    int b = 9;
    void child(){
        cout<<"child";
    }
};

class GrandChild: public Child{
    public:
    int c = 8;
    void grandchild(){
        cout<<"grandChild";
    }
};


int main(){
    GrandChild son;
    son.parent();
    son.a = 5;
    return 0;
}