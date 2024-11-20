

//Pass By Reference using ALias

#include <bits/stdc++.h>
using namespace std;

void changeA(int &b){           // just use a new variable as alias for original one
    b = 20;                     // it will change the value at address level
}

int main(){
    int a = 5;

    changeA(a);   
    cout<<a;
    return 0;
}