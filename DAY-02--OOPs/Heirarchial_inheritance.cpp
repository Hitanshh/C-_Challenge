#include <bits/stdc++.h>
using namespace std;

class GrandParent{
    public:
    int a = 0;
    void parent(){
        cout<<"GrandPa";
    }
};

class Father: public GrandParent{
    public:
    int b = 9;
    void child(){
        cout<<"Father";
    }
};

class Mother: public GrandParent{
    public:
    int c = 8;
    void mother(){
        cout<<"Mother";
    }
};


int main(){
    Father son;
    Mother daughter;
    son.parent();
    son.a = 5;
    son.b = 2;
    daughter.c = 3;
    daughter.parent();
    daughter.a = 9;
    return 0;
}