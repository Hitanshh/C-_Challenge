//sum of pairs in an array should be less the target given to you..
//using the two ptr approach, juss check when the sum of pairs is less than the target given, count all the elements between the left ptr and the right ptr, as we know that if (i+j) is less than target, then any value less than j will give us the sum < target.
// so count = count + (right - left);

//The array must be sorted for this approach.

#include <bits/stdc++.h>
using namespace std;

int CountPairs(vector<int> arr , int target){
        int count = 0;
        //left pointer
        int i = 0;
        //right pointer
        int j = arr.size()-1;
        // sort the array for applying 2 ptr approach
        sort(arr.begin(), arr.end());

        // run loop until the left ptr passes right ptr
        while(i<j){
            //create sum for ease of writing code
            int sum = arr[i]+arr[j];

            if((sum)<target){
                count = count +(j-i); // storing all values less than j, which will give the sum of i+j < target
                i++;
            }
            else if(sum>target){
                j--;
            }
            else{
                j--;
            }
            
        }
        return count;
}

int main(){

    vector<int> arr = {7, 2, 5, 3};
    int ans = CountPairs(arr,  8);
    cout<<ans;
    return 0;
}