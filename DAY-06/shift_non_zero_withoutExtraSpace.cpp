
// Shifting all non-zero elements to the left and all zero to the right in an array, using NO extra space


// [10,5,0,8,0,6,6,8,0,1] ---> [10,5,8,6,6,8,1,0,0,0]
#include <bits/stdc++.h>
using namespace std;

void print(vector <int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void pushZerosToEndwithNoSpace(vector<int>& arr) {
        
        int check = 0;
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if(arr[i]!=0){
                arr[check]=arr[i];
                check++;
            }
            else{
                count++;
            }
        }
        int start = arr.size()-count;
        for (int i = start; i < arr.size(); i++)
        {
            arr[i]=0;
        }
        

        print(arr);
    }


int main(){
    vector<int> arr = {10,5,0,8,0,6,6,8,0,1};
    print(arr);
    cout<<endl<<"after function: "<<endl;
    pushZerosToEndwithNoSpace(arr);
    
    return 0;
}

/*

OUTPUT:
10 5 0 8 0 6 6 8 0 1 
after function: 
10 5 8 6 6 8 1 0 0 0 

*/