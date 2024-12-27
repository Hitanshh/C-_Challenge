#include <bits/stdc++.h>
using namespace std;

/*//BruteForce (Set Approach)..
vector<int> RemoveDuplicate(int arr[], int n){
    set <int> st;
    vector <int> ans;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);     //NlogN
    }
    for(auto i: st){           //N
        ans.push_back(i);
    }
    return ans;
}

tc->0(nLogn + N)
*/
//Optimized Approach.. 2 pointer..
vector<int> RemoveDuplicate(int arr[], int n){
    vector <int> ans;
    int i = 0;
    for(int j = 1; j<n; j++){
       if(arr[i]!=arr[j]){
        arr[i+1] = arr[j];
        ans.push_back(arr[i]);
        i++;
       }
    }
    return ans;  //Size of duplicate free array
}


void print(vector <int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,9,4,5,6,7,9,9};
    int n = 9;
    // int a = RemoveDuplicate(arr,9);
    
    print(RemoveDuplicate(arr,9));

    return 0;
}