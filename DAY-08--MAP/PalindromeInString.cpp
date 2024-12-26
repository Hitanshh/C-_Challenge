#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str)
{
    int start = 0; 
    int end = str.length()-1;
    while(start<end){
        if(str[start] != str[end]){
            return 0;
        }else{
            start++, end--;
        }
    }
    return 1;
}
int main(){
    string str = "ANNA";
    bool check = checkPalindrome(str);

    if(check)cout<<"YES";
    else cout<<"NO";

    return 0;
}