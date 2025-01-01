//Anagram -> when same string is arranged in diff way
//ie. "eat" and "ate" orr "listen" and silent

#include <bits/stdc++.h>
using namespace std;

//BruteForce-->Sort and check
//TC-> nlogn for 1 sorting, n=lenght of string
// and for comparisoin 0(n).. n is string length 

//Total TC-> nlogn + n --> nlogn
void Anagram(string s1, string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2) cout<<"YES";
    else cout<<"NO";
    
}

int main(){
    string s1 = "LISTEN";
    string s2 = "SILENT";

    Anagram(s1,s2);         // OP -> YES

    return 0;
}