//Find Highest freq element and Lowest freq element

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //declaring array
    int arr[] = {1,2,1,1,1,7,3,5,4,8,8,8,6,4,8};

    //initializing map.. map will give sorted values if there are more than one max freq or least freq, then the ordered map will give us the mini valued element, whereas the unordered can give any random value..

    map <int,int> mp;

    //counting freq of elements
    for(auto i : arr){
        mp[i]++;
    }

    //required variables
    int mini = INT_MAX;
    int mini_Element;
    int maxi = INT_MIN;
    int maxi_Element;

    //finding max and min freq
    for(auto i: mp){
        // mini = min(mini,i.second);
        // maxi = max(maxi,i.second); ise elmt ni ayga

        if(i.second>maxi){
            
            maxi = i.second;
            maxi_Element = i.first;
        }
        else if(i.second<mini){
            mini = i.second;
            mini_Element = i.first;
        }
    }

    //displaying values of element n freq
    cout<<"least frequency: "<<mini_Element<<" : "<<mini<<endl;
    cout<<"Max frequency: "<<maxi_Element<<" : "<<maxi;

    return 0;
}


//to store all elements with max freq
/*
    int maxi = INT_MIN;
    vector<int> maxiElements;

    // Finding max frequency and the corresponding elements
    for (auto i : mp) {
        if (i.second > maxi) {
            maxi = i.second;
            maxiElements.clear();  // Clear the vector as we found a new max frequency
            maxiElements.push_back(i.first);
        } else if (i.second == maxi) {
            maxiElements.push_back(i.first);  // Add to vector if frequency matches max
        }
    }
 */