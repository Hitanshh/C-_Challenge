#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    virtual void Shape(){                // made to be redefined or overridden in the child class
        cout<<"drawing a shape"<<endl;
    }
    void AnotherShape(){
        cout<<"d2"<<endl;
    }
};
class Child: public Parent{
    public:
    void Shape(){
        cout<<"hey";
    }
    void AnotherShape(){
        cout<<"hehe";
    }
    void draw(){
        cout<<"draw3"<<endl;
    }
};

int main(){
    Parent chintu;
    chintu.Shape();
    chintu.AnotherShape();
    Child golu;
    golu.Shape();
    golu.AnotherShape();
    golu.draw();
    return 0;
}


//OUTPUT: ye output isiliye same lag rha normal and virtual function me kyuki humne pointer ke through class nii kiya otherwise pointer banate parent class ka then usko point karte child class pr then wo agar virtual hota toh child ka func run karta otherwise parent ka

//like ->        Parent*p = new Child(); then.... p->Shape();..... p->Another();


//output of upper code
/*drawing a shape
d2
heyhehedraw3*/