#include <bits/stdc++.h>
using namespace std;

void ReverseTriangle(int n){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
}
int main(){
    ReverseTriangle(5);
    return 0;
}