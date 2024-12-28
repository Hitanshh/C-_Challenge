#include <bits/stdc++.h>
using namespace std;

int SubAry(vector<int> arr, int target){
    int count = 0;
    for(int i = 0; i<arr.size(); i++){
        int sum = 0;
        for(int j = i; j<arr.size(); j++){
            sum = sum + arr[j];
            if(sum == target){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1,2,-3,6,6,7,8,6,-3,-5,6};
    int ans = SubAry(arr,3);
    cout<<ans;
    return 0;
}