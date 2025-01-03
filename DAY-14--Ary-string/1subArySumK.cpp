//sum of substring is equal to K..
// brute force was run two loops, j=i and check the sum==target, if is true them do count++;
// but this will throw TLE, so try an optimized code..


//Using Pre-fix Sum approach..

#include <bits/stdc++.h>
using namespace std;

int SubArySum(vector<int> arr, int k){
    unordered_map<int,int>mp;
    vector<int> PrefixSum;
    int count = 0;
    PrefixSum[0]=arr[0];
    for(int i = 1; i<arr.size(); i++){
        PrefixSum[i] = arr[i] + PrefixSum[i-1];
    }
    
    for(int j = 0; j<arr.size(); j++){
        if(PrefixSum[j]==k){
            count++;
        }
        int val = PrefixSum[j] -k ;
        if(mp.find(val)!=mp.end()){
            count = count + mp[val];
        }
        mp[PrefixSum[j]]++;
        
    }
    return count;
}

int main(){
    vector <int> arr = {10, 2, -2, -20, 10};
    int a = SubArySum(arr, -10);
    cout<<a;
    return 0;
}