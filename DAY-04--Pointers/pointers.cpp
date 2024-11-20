//What are pointers: 
//It is an special variable which stores address of other variables

// It is written as ..
// (data_type) (*) (variable_name) = (&)(variable_name) {address of the variable where we want to point our pointer}

#include <bits/stdc++.h>
using namespace std;

int main(){
    

    int a = 54;
    int* ptr = &a;

    cout<<ptr<<endl;
    cout<<&a<<endl;        // Both will be same.. as ptr is pointing towards the address of the variable


    return 0;
}