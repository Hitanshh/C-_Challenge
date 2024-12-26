#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "Hello!";
    string str2 = "World!";

    string merged1 = str1 + str2;
    string merged2 = str1.append(str2);

    cout<<"merged1: using + opr -> "<<merged1<<endl;
    cout<<"merged2: using append() opr -> "<<merged2;
    
    return 0;
}