#include <bits/stdc++.h>
using namespace std;

class Father{
    public:
    int a = 0;
    void father(){
        cout<<"father";
    }
};

class Mother{
    public:
    int b = 9;
    void father(){
        cout<<"mother";
    }
};

class Son: public Father, public Mother{
    public:
    int c = 8;
    void grandchild(){
        cout<<"son";
    }
};


int main(){
    Son goliBeta;
    goliBeta.Father::father();    // best to remove ambiguity in the multiple inhritanc,
    goliBeta.Mother::father();    // object . class_name :: function with ambiguity
    // goliBeta.mother();
    return 0;
}