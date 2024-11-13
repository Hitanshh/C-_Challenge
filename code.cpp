#include <iostream>
using namespace std;

void PrintSquare(int n){
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}



int main(){
    PrintSquare(5);
    return 0;
}