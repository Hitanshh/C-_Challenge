#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
void Merge(vector<int> arr, vector<int>brr){
    vector <int> ans;
    // int size = min(arr.size(), brr.size());
    int left = 0;
    int right = 0;

    while(left<arr.size() && right<brr.size()){
        if(arr[left]<=brr[right]) {
        ans.push_back(arr[left]);
        left++;
        }    
        else{
            ans.push_back(brr[right]);
            right++;
        }
    }
    while(left<arr.size())
    {
        ans.push_back(arr[left]);
        left++;
    }
    while(right<brr.size())
    {
        ans.push_back(brr[right]);
        right++;
    }
    print(ans);

    //REshuffle the arrays according to the new sorted values in respective arrays..
    int i = 0;
    while(i<ans.size()){
        if(i<arr.size()){
            arr[i]=ans[i];
        }else{
            brr[i-arr.size()]=ans[i];
        }
        i++;
    }
    cout<<endl<<"arr: "<<endl;
    print(arr);
    cout<<endl;
    print(brr);



}

int main(){
    vector<int> arr = {5,10,16,35,78};
    vector<int> brr = {1,6,7,9,81,99,101};
    Merge(arr,brr);
    return 0;
}