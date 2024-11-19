//Polymorphism: Poly-> many ... Morph-> Forms
// => ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
//Compile Time -> Constructor overloading, function overloading 
// RunTime polymorphism -> Function overriding(inheritance- by redefining the fun in child class and calling it, or can use virtual fun in parent calss)


//Compile time..
#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    
    void getInfo(int a){
        cout<<"parent"<<endl;
    }
    void getInfo(){
        cout<<"non parameterized"<<endl;
    }
    void getInfo(string s){
        cout<<"different type of para"<<endl;
    }

    // for runtime
    void overridingFun(){
        cout<<"in parent class"<<endl;
    }
};

class Child: public Parent{
    public:
    void overridingFun(){
        cout<<"Hey, Im in child class"<<endl;
    }
    
};


int main(){
    Child c2;
    c2.getInfo();
    c2.getInfo("hey");
    c2.getInfo(2);
    c2.overridingFun();
    c2.Parent::overridingFun();
    return 0;
}