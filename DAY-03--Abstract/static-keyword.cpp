#include <bits/stdc++.h>
using namespace std;

void func(){
    // int x = 0;                   // defined in the stack and will be removed and redefined value will always be zero as the function runs again
    
    // initialization of x value for life time
    static int x = 0;               // Now value of x is not stored in stack and this line will only be run once, and value get init as 0

    cout<<"value of x : "<<x<<endl;
    x++;
}


int main(){
    func();
    func();
    func();
    func();

    return 0;
}