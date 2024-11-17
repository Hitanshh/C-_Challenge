//Polymorphism in C++ refers to the ability to call different functions using the same interface. It is categorized into compile-time (static) polymorphism and run-time (dynamic) polymorphism.



#include <bits/stdc++.h>
using namespace std;


// class Parent{
//     public : 
//     void func(int a){
//         cout<<"in parent class";
//     }
// };

// class Derived: public Parent{
//     public: 

//     //Override

//     void func(){
//         cout<<"in derived class";
//     }
// };

class Parent{
    public : 
    void func(int a){
        cout<<"in parent class";
    }
};

class Derived: public Parent{
    public:
    
    // over loading of functions
    void func(int a){
        cout<<"in 1";
    }
    void func(int a, int b){
        cout<<"in 2";
    }
    void func(){
        cout<<"in 3";
    }
};


int main(){
    Derived obj;
    obj.func();
    return 0;
}