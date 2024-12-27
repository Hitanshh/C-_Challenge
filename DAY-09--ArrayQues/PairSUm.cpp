//Count Pair Sum in array
//ie.. [1,5,3,4,2];
// sum = 6; so pairs can be-> (1,5),(2,4)

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
/* //BRUTE FORCE.. TC- 0(n^2) -> 1 nested loops

void pairSum(vector<int> arr, int sum){
    vector <int >ans;
    int count = 0;
    for(auto i : arr){
        for(int j = i; j< arr.size(); j++){
            if((i+j)==sum){
                count++;  //or return i,j; for ele
            }
        }
    }
    cout<<count;
}
*/

/*//Better Soln.. using map
int pairSum(vector<int> arr, int sum){
    map <int, int > mp;
    //a +b = sum
    for(int i=0; i<arr.size(); i++)
    {
        int a = i;
        int more = sum - i;
        if(mp.find(more) != mp.end()){
            return {mp[more]};
        }
        mp[a] = i;
    }
    return -1;
}
*/

//Best Optimal Solution.. returns count
int pairSum(vector<int> arr, int sum){
    unordered_map <int, int > mp;
    //a +b = sum
    int a ;
    int count = 0;
    for(int i=0; i<arr.size(); i++)
    {
        a = sum - arr[i];
        if(mp[a]){       //mp.find(a)!= mp.end()->mp[a]
            count = count + mp[a];
        }
        mp[arr[i]]++;
    }
    return count;
}
int main(){
    vector<int>arr = {1,5,3,4,2};
    int p = pairSum(arr,6);
    cout<<p;
    return 0;
}