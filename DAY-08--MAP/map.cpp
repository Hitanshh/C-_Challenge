//There are two types of maps in cpp 
//1. Ordered map- sorted key-value pairs
//2. UnOrdered map- unsorted key-value pairs

// initialized by ->>  map<datatype,datatype> name;
// iterator ->> map<int,int> :: iterator it;

#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
map<int, int> mp;
int arr[] = {5,3,8,7,5,3,7,8,11};
int count = 0;
for(int num: arr){
    mp[num]++;
}

//  for (const auto& pair : mp) {
//         cout << pair.first << " : " << pair.second << "\n";
//     }
map<int, int> :: iterator it;
// int i = 0;
for(it = mp.begin(); it != mp.end(); it++){
    cout<<it->first<<" "<<it->second<<endl;
}
    return 0;
}