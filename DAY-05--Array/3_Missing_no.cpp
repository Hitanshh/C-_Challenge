#include <bits/stdc++.h>
using namespace std;


void print(vector <int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void missingNumber(vector<int> arr){
    
    //First method can be by First Sorting the array then finding the missing number
    sort(arr.begin(), arr.end());
    int check = arr[0];
    int k = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(check == arr[i]){
            
        }else{
            k = check;
            check++;
        }
        check++;
    }
    cout<<"missing number is : "<<k<<endl;
    
    print(arr);
}

int main(){
    vector<int> arr = {6,2,1,5,4,7};
    missingNumber(arr);
    return 0;
}