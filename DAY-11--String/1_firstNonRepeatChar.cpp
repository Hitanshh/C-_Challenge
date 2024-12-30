#include <bits/stdc++.h>
using namespace std;

char FirstNonRepeatingChar(string s){
    unordered_map<char, int> mp;
    for(auto i: s){
        mp[i]++;
    }
    for(auto i: s){
        if(mp[i]==1){
            return i;
        }
    }
    return -1;
}

int main(){
    string s = "hitansh";
    char ans= FirstNonRepeatingChar(s);
    cout<<ans;

    return 0;
}