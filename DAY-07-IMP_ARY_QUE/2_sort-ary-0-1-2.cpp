// Sort array of 0s 1s and 2s
// [2,1,2,0,0,2,1,1,0]

/* 
This can be done by "Quick sort" as well but the tc will be 0(nlogn) ... ie not acceptable

second way is by using MAP

third is by using variables like zero,one,two and then count them, and run loop to put them in array 
(0(2n))

4th by using DNF -> Deutch National Flag Algo (3 ptr)
l is for 0s, m is for 1s and h is for 2s..

from 0 to low the value is 0s (sorted)
from low to mid the values are 1s (sorted)
from mid to high the values are unsorted 
from high to size-1 the values are 2s (sorted)

so just need to sort the values from mid to high only


so, just play with mid only

arr[mid] == 0 -> swap(l,m) ->sorted-> l++, m++
arr[mid] == 1 -> yhi toh chahiye mid me, -> m++
arr[mid] == 2 -> swap(m,h) -> sorted-> h--

run loop till MID aur HIGH cross na ho
*/

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
// [2,1,2,0,0,2,1,1,0]

vector<int> Sort(vector<int> arr){

    int l = 0;
    int m = 0;
    int h = arr.size() - 1;

    while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            l++, m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m], arr[h]);
            h--;
        }
    }
    print(arr);

    // int zero =0;
    // int one =0;
    // int two=0;
    // vector<int> ans;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if(arr[i]==0){
    //         zero++;
    //     }
    //     if(arr[i]==1){
    //         one++;
    //     }
    //     if(arr[i]==2){
    //         two++;
    //     }
    // }
    // while(zero){
    //     ans.push_back(0);
    //     zero--;
    // }
    // while(one){
    //     ans.push_back(1);
    //     one--;
    // }
    // while(two){
    //     ans.push_back(2);
    //     two--;
    // }
    // print(ans);

}

int main(){
    vector<int> arr= {2,0,2};
    Sort(arr);
    return 0;
}