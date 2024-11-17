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
    void father(){
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

class Son:public Mother, public Father{
    public:
    void son(){
        cout<<"son";
    }
};


int main(){
    Son goli;
    goli.son();
    goli.mother();
    goli.father();
    goli.Father::parent();  // this is the one method to remove the ambiguity
                            // another method is by making the two other classes as virtual to use the function


    return 0;
}