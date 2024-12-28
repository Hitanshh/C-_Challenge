#include <bits/stdc++.h>
using namespace std;

int MaxSubArySum(vector<int> arr){
    int sum = 0;
    int maxi = INT_MIN;
    for(int i = 0; i<arr.size(); i++){
        sum = sum + arr[i];
        maxi = max(maxi , sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    vector<int> arr = {1,2,-3,4,5,8,-6};
    int ans = MaxSubArySum(arr);
    cout<<ans;
    
    return 0;
}