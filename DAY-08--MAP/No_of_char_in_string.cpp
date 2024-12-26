//WAP to print count of char in a string
//ie. Hii -> H:1, i:2

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //let's first convert all input value to lower case
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c);});

    map <char, int> mp;
    for(int i = 0; i<s.length(); i++){
        mp[s[i]]++;
    }
    for(auto i : mp){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    return 0;
}