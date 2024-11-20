#include <bits/stdc++.h>
using namespace std;

void print(vector <int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void reverseArray(vector<int> arr){

    vector <int> ans;
    int st = 0;
    int end = arr.size()-1;
    
    while (st<end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    
    print(arr);
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    reverseArray(arr);
    // print(a);

    return 0;
}