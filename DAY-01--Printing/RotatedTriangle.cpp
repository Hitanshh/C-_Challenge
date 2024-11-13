#include <bits/stdc++.h>
using namespace std;

void RotatedTriangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    int m = n-1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m-i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }

}

int main(){
    RotatedTriangle(5);
    return 0;
}