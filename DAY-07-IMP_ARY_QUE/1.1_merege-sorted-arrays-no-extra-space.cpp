//Merge two sorted arrays with no extra space..

#include <bits/stdc++.h>
using namespace std;


void print(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

void Merge(vector<int> arr, vector<int> brr){
    int left = arr.size()-1;
    int right= 0;
    while (left>= 0 && right < brr.size())
    {
        if(arr[left]> brr[right]){
            swap(arr[left], brr[right]);
            left--, right++;
        }else{
            break;
        }

    }
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
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