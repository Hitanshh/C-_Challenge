#include <bits/stdc++.h>
using namespace std;

void MinMax(vector<int> arr){
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int i = 0;
    while(i<arr.size()){
        if(arr[i]<mini){
            mini = min(mini,arr[i]);
        }
        if(arr[i]>maxi){
            maxi = max(maxi, arr[i]);
        }
        i++;
    }
    cout<<"MAX-> "<<maxi<<endl;
    cout<<"MIN-> "<<mini;
}

int main(){
    vector<int> arr = {1,2,3,5,4,8,6,87,4,9,8,6,0};
    MinMax(arr);
    return 0;
}