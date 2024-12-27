//Check subarrray is  a part of another array
// arr = [1,2,5,3,7,8,55,56,23,1]
// brr = [56,55,6,23,7,2]

/* Now check whether brr is subset of arr or not
    we are using set for this, first we'll insert all the values of arr in the set, (s.insert(arr[i]));
    then we'll check the ele of brr whether present in arr or not, by using s.find(brr[i]) == s.end();
    this find() will find brr[i] in the set and then by equating it with s.end() shows that the ele is not present in the set..

    set will give s.end() when the ele isn't present, hence it helps in finding what is not present in the array.
    and then we'll we say, check = false and break, as the element isn't present in the set of arr, and hence the brr ele is not subset of arr array.

*/ 

#include <bits/stdc++.h>
using namespace std;

bool SubAryCheck(vector<int> arr, vector<int> brr){
    set <int> s;
    bool check = false;
    for(auto i: arr){
        s.insert(i);
    }
    for(auto i: brr){
        if(s.find(i)==s.end()){
            check = false;
            break;
        }else{
            check = true;
        }
    }
    return check;

}

int main(){
    vector<int> arr = {1,2,5,3,7,8,55,56,23,1};
    vector<int> brr = {56,55,6,23,7,2};
    if(SubAryCheck(arr,brr)){
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}