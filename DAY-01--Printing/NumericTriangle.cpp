#include <bits/stdc++.h>
using namespace std;

void PrintNumericTriangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
        
    }
    
}

int main(){
    PrintNumericTriangle(5);
    return 0;
}