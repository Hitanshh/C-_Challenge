// There are two teams in football match..
// this is the array showing goals done by teams, 
//[red,blue,red,red,blue, blue, red]
//WAP to see which team one..

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string arr[] = {"red","blue","red","red","blue", "blue", "red"};
    int n = 7;
    map<string, int> mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto i : mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
    
}