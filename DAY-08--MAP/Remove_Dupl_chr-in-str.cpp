//Remove Duplicate Char in a string..

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

string Duplicates(string str){
    string ans;
    unordered_set <char> seen;
    for(auto ch : str){
        if(seen.find(ch)== seen.end()){
            ans = ans+ ch;
            seen.insert(ch);
        }
    }
    return ans;
}
int main(){
    string str = "aabbssccddfffkkk";
    cout<<"COde is running.."<<endl;
    string Duplicate_free = Duplicates(str);

    cout<<"After Removing Duplicates -> "<<Duplicate_free<<endl;
    
    
    return 0;
}