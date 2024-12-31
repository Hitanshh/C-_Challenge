//Longest Consecutive sequence in an Array..

//ie. A=[23,2,4,12,3,5,8,13,11,14,21,15]
//here the longest streak is 11,12,13,14,15-->5 elements,, another is 2,3,4,5-->4 eles.. so the longest streak is of 5 elements so return 5;

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

//Using Optimized, but BF can be faster sometime..
//TC-{if set takes-> 0(1) then 0(3N) else depends..} SC- 0(n)

int LongCsequence(vector<int> arr){
    unordered_set <int> st;
    for(int i = 0; i<arr.size(); i++){
        st.insert(arr[i]);
    }
    int longest=1;
    for(int i= 0; i<arr.size(); i++){
    int count=0;
        if(st.find(arr[i]-1)==st.end()){
            count++;
            int x = arr[i];
            while (st.find(x+1)!=st.end())
            {
                x= x+1;
                count++;
            }

            longest = max(longest,count);
        }
        else{

        }
    }
    return longest;
}

int main(){
    vector <int> arr = {23,2,4,12,3,5,8,13,11,14,21,16,15};
    int ans = LongCsequence(arr);
    cout<<ans;
    return 0;
}