//Anagram -> when same string is arranged in diff way
//ie. "eat" and "ate" orr "listen" and silent

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

//Optimized Approach..

//Total TC-> 0(n).... n= length of string
bool Anagram(string s1, string s2){
    unordered_map<char, int> mp;

    //edge case, if lenght is diff, toh return false
    if(s1.length() != s2.length()){
        return false;
    }

    //count the freq of ele from any-one str
    for(auto i : s1){
        mp[i]++;
    }
    for(auto i: s2){
        if(mp[i]){
            mp[i]--;
        }  //mp.find(i) != mp.end()
        else return false;
    }
    return true;
}

int main(){
    string s1 = "LISTEN";
    string s2 = "SILENT";

    if(Anagram(s1,s2)) cout<<"YES";    // OP -> YES
    else cout<<"NO";

    return 0;
}