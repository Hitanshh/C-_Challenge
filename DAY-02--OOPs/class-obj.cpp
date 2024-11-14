#include <bits/stdc++.h>
using namespace std;


class Parent{

    int firstVar=0;
    void setSecond(int secondVar){           // this will be inacessible from all the objexts as this is private
        this->secondVar = secondVar;
    }
    
    public:
    void getSecond(){
        cout<<secondVar<<endl;
    }
    int secondVar=1;

    void setFirst(int firstVar){
        this->firstVar = firstVar;
    }
    void getFirst(){
        cout<<firstVar;
    }

};



int main(){
    Parent obj;
    // obj.firstVar = 2;   //inacessible
    obj.setFirst(2); // this will change the value of private var of class
    // obj.getFirst();
    // obj.secondVar = 3;
    obj.getSecond();
    // obj.setSecond(4); //inacessible due to the private accesss specifier of class..
    cout<<obj.secondVar;
    return 0;
}