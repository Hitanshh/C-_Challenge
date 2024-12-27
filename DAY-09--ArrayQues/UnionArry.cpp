//Union of two arrays
#include <bits/stdc++.h>
using namespace std;
void print(vector <int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int brr[] = {1,21,35,2,3,4,5,6,8,98};
    int m = 10;
     // using unOrdered Map
    unordered_set<int> uset;
    // if only set used then 
    //op- 12
    //1 2 3 4 5 6 7 8 9 21 35 98   
    while(n) uset.insert(arr[--n]);
    while(m) uset.insert(brr[--m]);
    cout<<uset.size()<<endl;
    

    //to return the elements in union
    vector<int> ans;
    for(auto i: uset){
        ans.push_back(i);
    }
    print(ans);
    return 0;
}