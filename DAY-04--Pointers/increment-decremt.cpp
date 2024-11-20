

#include <bits/stdc++.h>
using namespace std;


int main(){
    int a = 5;
    int *ptr= &a;
    cout<<ptr<<endl;  //0x61ff08
    //value..
    cout<<"Value: "<<*ptr<<endl;
    ptr++;
    cout<<ptr<<endl;  //0x61ff0c
    //value..
    cout<<"Value: "<<a<<endl; // any garbage value at this (+4 addresss)
    return 0;
}