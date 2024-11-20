#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int *ptr;
    cout<<ptr<<endl; // it will garbage value as no vlaue is assigned
    //ex- 0x401acb
    cout<<"what if we try dooing dereferencing on this pointer which is not assigned yet"<<endl;
    cout<<*ptr<<endl;
    // Hence it will give us the garbage value where it is randomly assigned..
    //ex- 1528349827

    cout<<endl<<"NULL POINTER..."<<endl;
    int *ptr2 = NULL;
    cout<<ptr2<<endl; //output = 0;
    cout<<&ptr2; // address of the ptr2 poinnter will come as a output
    cout<<*ptr2; //output- kuch nhi diya
    // output should be like .. segmentation error, but kuych nhi diya isne idk why

    return 0;
}