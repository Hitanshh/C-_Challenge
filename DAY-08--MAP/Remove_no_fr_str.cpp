#include <bits/stdc++.h>
using namespace std;

string RemoveNumbr(string str){
    string ans;
    for(auto i : str){
        if(!isdigit(i)){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    
    string s = "Hello445World123";
    string p = RemoveNumbr(s);
    cout<<p;

    return 0;
}


/*
    string s = "Hitan465479870sdf54sdf8ds7f89sh123";
    string newS;
    for(auto i : s){
        if(!isdigit(i)){
            newS+=i;
        }
    }
    cout<<newS;
*/