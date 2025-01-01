#include <bits/stdc++.h>
using namespace std;

bool isParenthesisBalanced(string& s) {
        // using stack..
        stack<char> st;
        // bool check = false;
        
        for(int i = 0; i<s.length(); i++){
            
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else
            {
                if(st.empty()){
                 return false;
                }
                char ch = st.top();
                

                if((s[i]==')' && ch=='(') || 
                (s[i]==']' && ch=='[') ||
                (s[i]=='}' && ch=='{')){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
    if(st.empty())
    {
        return true;
    }
    else return false;
    }

int main(){
    string str = "{[([])]}";
    if(isParenthesisBalanced(str)){
        cout<<"yes";
    }else{
        cout<<"NO";
    }
    return 0;
}