#include <bits/stdc++.h>
using namespace std;

class Parent{

    int s = 2;
    void privateFun(){
        cout<<"privateFun";
    }
    public:
    void print(){
        cout<<"public function"<<endl;
    }

    void setParentVar(int s){
        this->s = s;
    }
    void getParentVar(){
        cout<<s<<endl;
    }

};

class Child: public Parent{        //Simple or Single Inheritance..
    public:
    void anotherPrint(){
        cout<<"hello2";
    }
    // void setParentVar(int s){          s cannot be accessed here due to privacy
    //     this->s = s;
    // } 

    // void getParentVar(){
    //     cout<<s;
    // }
};

int main(){
    Child obj;
    obj.print();
    // obj.privateFun(); //inaccessible due to private access specifier
    // obj.s= 3;
    obj.setParentVar(5);
    obj.getParentVar();
    obj.anotherPrint();

    return 0;
}