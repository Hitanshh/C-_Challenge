#include <bits/stdc++.h>
using namespace std;

bool CheckSorted(vector<int> arr){
    for(int i = 1; i<arr.size(); i++){
        if(arr[i]>=arr[i-1]) {}
        else {
        return 0;
        }    
    }
    return 1;
}


int main(){
    vector <int> arr = {1,2,3,4,5,6,7,8};
    vector <int> brr = {2,3,6,5,6,7,8};
    if(CheckSorted(brr)){
        cout<<"yes";
    }else cout<<"NO"<<endl;
    return 0;
}