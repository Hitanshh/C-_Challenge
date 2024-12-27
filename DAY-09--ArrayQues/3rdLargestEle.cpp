//3rd Largest Element in an Array..

#include <bits/stdc++.h>
using namespace std;

int ThirdLarg(vector<int> arr){
    int thirdLarge= INT_MIN;
    int count = 0;
    sort(arr.begin(), arr.end());
    for(int i = arr.size()-1; i>0; i++){
    
    if(arr[i]!=arr[i-1]){
        count++;
    }
    if(count == 2){
        thirdLarge = arr[i];
        break;
    }
    
    }
    return thirdLarge;
}


void print(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr={1,2,17,8,9,16,20,20,17};
    int ans = ThirdLarg(arr);
    cout<<"Third Largest Value is : "<<ans<<endl;
    return 0;
}