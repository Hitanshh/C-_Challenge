#include <bits/stdc++.h>
using namespace std;

void SameNumTriangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<i+1<<" ";
        }
        
        cout<<endl;
    }
    
}

int main(){
    SameNumTriangle(5);
    return 0;
}