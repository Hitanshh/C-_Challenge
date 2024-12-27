//2nd Largest in an array..
//check for largest..-> then asign old largest to second_largest..->then what if any value is not greater than largest but greater than second_largest, for this, 
//check for slargest by 
//-> arr[i]>slargest && arr[i] != largest
//coz, what if sl got asigned largest

#include <bits/stdc++.h>
using namespace std;
/*//BruteForce
int SecL(vector<int> arr){
    int slargest = INT_MIN;
    sort(arr.begin(),arr.end());
    int largest = arr[arr.size()-1];
    for(int i = arr.size()-1; i>0; i--){
        if(arr[i]<largest){
            slargest = arr[i];
            break;
        }
    }
    return slargest;
}
*/
//Better Approach..
int SecL(vector<int> arr){
    int largest = INT_MIN;
    int slargest = INT_MIN;

    for(int i = 0; i<arr.size(); i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }

        if(arr[i]>slargest && arr[i]!=largest){ // better to use arr[i]<largest
            slargest = arr[i];
        }
    }

    return slargest;
}


void print(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    vector<int> arr={1,2,17,8,9,16,20,20,17};
    int ans = SecL(arr);
    cout<<"Second Largest Value is : "<<ans<<endl;
    return 0;
}