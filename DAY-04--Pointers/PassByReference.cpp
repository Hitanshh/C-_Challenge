

//Pass By Reference using POINTERsss

#include <bits/stdc++.h>
using namespace std;

void changeA(int* ptr){ 
    *ptr = 39;            // as we know *ptr = value of a, so use it to change the value of a
}

int main(){
    int a = 5;

    changeA(&a);    //.. we need to pass the address of a
    cout<<a;
    return 0;
}