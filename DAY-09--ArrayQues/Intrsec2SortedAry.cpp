//Intersection of two SORTED array 

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
    int brr[] = {1,2,3,4,5,6,8,21,35,98};
    int m = 10;

    int i = 0; 
    int j = 0;
    vector<int> ans;
    while(i<n && j<m)
    {
        if(arr[i]==brr[j]){
            ans.push_back(arr[i]);
            i++, j++;
        }
        else if(arr[i]<brr[j])
        {
            i++;
        }
        else if(arr[i]>brr[j])
        {
            j++;
        }
        
        if(ans.empty()){
            ans.push_back(-1);
        }
    }
    print(ans);
    return 0;
}