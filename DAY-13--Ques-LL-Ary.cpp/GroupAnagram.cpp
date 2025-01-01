//Group together similar types of ANAGRAM in an array
//Anagram -> Same string in diff arrangement
// ie-> arr = ["cat" , "tac", "dog","act", "god"]
// output=> {[cat,tac,act],[dog,god]}

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

//TC--> 0(NxlogN)

void print(const vector<vector<string>>& groupedAnagrams) {
    for (const auto& group : groupedAnagrams) { // Har group ke liye
        cout << "[ ";
        for (const auto& word : group) { // Har word ke liye
            cout << word << " "; // Word print karo
        }
        cout << "]" << endl; // Group close karo
    }
}


//Use Map to grp anagram & their sorted form
//Key: sorted form
//value: list of all words that match sorted form
vector<vector<string>> Anagram(vector<string> arr){
    unordered_map<string, vector<string>> mp;
    //har str ka sorted form nikalo aur map me dalo, aur uska unsorted form ko value me pb karo
    //isse agar sorted same hoga toh unsorted mtlb jo normal str h wo ek sath list me store ho jayengi
    vector<vector<string>> ans; 
    // map ka i.sec store krne ke liye 
    for(int i = 0; i<arr.size(); i++){
        string s = arr[i];
        sort(s.begin(), s.end());
        mp[s].push_back(arr[i]);
    }
    for(auto i : mp){
        ans.push_back(i.second);
    }
    return ans;
}

int main(){
    vector<string> arr = {"eat", "tea", "tan", "ate", "nat", "bat"};
    print(Anagram(arr));
    return 0;
}

/*
Processing Words: DRY RUN..

Word: "eat", Sorted: "aet", Map: {"aet": ["eat"]}
Word: "tea", Sorted: "aet", Map: {"aet": ["eat", "tea"]}
Word: "tan", Sorted: "ant", Map: {"aet": ["eat", "tea"], "ant": ["tan"]}
Word: "ate", Sorted: "aet", Map: {"aet": ["eat", "tea", "ate"], "ant": ["tan"]}
Word: "nat", Sorted: "ant", Map: {"aet": ["eat", "tea", "ate"], "ant": ["tan", "nat"]}
Word: "bat", Sorted: "abt", Map: {"aet": ["eat", "tea", "ate"], "ant": ["tan", "nat"], "abt": ["bat"]}


i.second--->> 
[
  ["eat", "tea", "ate"],
  ["tan", "nat"],
  ["bat"]
]

*/