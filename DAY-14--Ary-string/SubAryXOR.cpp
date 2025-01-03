//Find the count of subarray with XOR = K;

//Brute Force approach is, 2loops, i=0,j=1, cal XOR for each itr, and if it is equal to K, count++
//TC-> 0(n^2)

//Optimal Approach, 
/*
using Map, for storing the XOR of each itr, then check XOR^K, present in Map, if it does, do count = count + freq of XOR^K in map, then push XOR in map
first, initialize the map with value 0,
what if the subarry's XOR value == 6, then if we check
XOR^K it will give 0, so put 0 in map
*/

#include <bits/stdc++.h>
using namespace std;

int countXORsubAry(vector<int> arr, int k){
    unordered_map<int,int> mp;
    mp[0]=1;
    int XORR = 0;
    int count = 0;

    for(int i = 0; i<arr.size(); i++){
        XORR = XORR^arr[i];
        if(mp[XORR^k]){
            count = count + mp[XORR^k];
        }
        mp[XORR]++;
    }
    cout<<count;
}

int main(){

    vector<int> arr= {4, 2, 2, 6, 4};
    countXORsubAry(arr,6);
    
    return 0;
}