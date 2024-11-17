#include <bits/stdc++.h>
using namespace std;

class GrandParent{
    public:
    int a = 0;
    void parent(){
        cout<<"GrandPa";
    }
};

class Father: virtual public GrandParent{        // virtually inherited parent class in subclass
    public:
    int b = 9;
    void father(){
        cout<<"Father";
    }
};

class Mother: virtual public GrandParent{         // it takes extra storage for storing pointer, 
                                                  //and ensure only one instance of gparent class parent at a time
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
    goli.parent();  // directly use


    return 0;
}