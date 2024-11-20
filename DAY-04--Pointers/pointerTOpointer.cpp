#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int a = 5;
    int* ptr = &a ;
    
    int **ptr2 = &ptr;
    cout<<ptr2<<endl<<&ptr<<endl;
    cout<<ptr<<endl<<&a;
    cout<<endl<<endl;

    cout<<*ptr<<endl<<a<<endl<<*ptr2<<endl<<&a<<endl<<ptr<<endl;
    cout<<endl<<"What the dereferencing-->"<<endl;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<**ptr2<<endl;


    cout<<endl<<"What are the values at dereferencing-->"<<endl;
    cout<<&ptr<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;


    cout<<endl<<"dereferencing operator '*'"<<endl;
    cout<<*(&a)<<endl;
    //value at &a is given by using *
    // cout<<**(&a)<<endl; error

    return 0;
}