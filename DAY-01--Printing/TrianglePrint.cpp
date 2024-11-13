#include <bits/stdc++.h>
using namespace std;

void PrintTriangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;  
    }
}

int main(){
    PrintTriangle(5);
    return 0;
}