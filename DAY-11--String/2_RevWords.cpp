//Reverse words in the string only

//" I like to play cricket" -> "cricket play to like I"

/*
steps:
s1: reverse the string
s2: create string ans=""
s3: for Looop 0->n
s4: create word string ="";
s5: run while loop with conditions
    -> i<size(for last element)
    -> to avoid space s[i]!=' '(do not use " " will get error coz its not for char, and we are dealing in char with s[i])
s6: i++
s7: out from while loop, and reverse the word, to get 
the correct one, as when we first reversed it, it 
became like-> hey=>yeh, now again reverse it to make it yeh=>hey back. and now we are dealing in words.
s8: add it to ans = ans+ " " + word.. problem is we'll 
get space in first place as well 
s9: while returning, do ans.substr(1);
    return the string of ans, from the 1st index to avoid starting space
*/

#include <bits/stdc++.h>
using namespace std;

string ReverseWords(string &s){
    string ans="";
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        string word="";
        while(i<s.length() && s[i]!= ' '){
        // cout<<"HII;
            word = word + s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.length()>0){
            ans = ans+ " " + word;
        }
    }
    return ans.substr(1);
}

int main(){
    string s = "I like to play cricket";
    string answer = ReverseWords(s);
    cout<<answer;
    return 0;
}