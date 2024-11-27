
// Shifting all non-zero elements to the left and all zero to the right in an array, using extra space


// [10,5,0,8,0,6,6,8,0,1] ---> [10,5,8,6,6,8,1,0,0,0]
#include <bits/stdc++.h>
using namespace std;

void print(vector <int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int> ans;
        int count=0;
        for (int i = 0; i < arr.size(); i++)
        {
            if(arr[i]!=0){
                ans.push_back(arr[i]);
            }
            else{
                count++;
            }
        }

        for (int i = 0; i < count; i++)
        {
            ans.push_back(0);
        }
        
        print(ans);
        
        
    }


int main(){
    vector<int> arr = {10,5,0,8,0,6,6,8,0,1};
    print(arr);
    cout<<endl<<"after function: "<<endl;
    pushZerosToEnd(arr);
    return 0;
}