#include <bits/stdc++.h>
using namespace std;

string reverseString(string str){
    int st= 0;
    int end= str.length()-1;
    while(st<end){
        swap(str[st], str[end]);
        st++, end--;
    }
    return str;
}
int main(){
    string str = "Hitansh Sharma";
    cout<<"COde is running.."<<endl;
    string Reversed = reverseString(str);

    cout<<"reversed string -> "<<Reversed<<endl;
    
    
    return 0;
}