#include <bits/stdc++.h>
using namespace std;


// abstract class-> a blue print for other classes
// No object from abstract class
// contains pure virttual function
// a class with pure virtual funtion is called as abstractt class
class Shape{

    virtual void draw()=0;  // pure virtual function
};
class Child: public Shape{
    public: 
    void draw(){
        cout<<"Drawing a circle "<<endl;
    }
};

int main(){
    
    return 0;
}