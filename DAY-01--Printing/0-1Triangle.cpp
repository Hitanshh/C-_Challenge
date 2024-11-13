#include <bits/stdc++.h>
using namespace std;

void Triangle(int n){
    for (int i = 0; i < n; i++) {

    for (int j = 0; j < i + 1; j++) {
      if (i%2==0) {
        if (j % 2 == 0) {
            cout<<"1 ";
        } else {
            cout<<"0 ";
        }
      } else {
          if (j % 2 == 0) {
            cout<<"0 ";
        } else {
            cout<<"1 ";
        }
      }
    }
      cout<<endl;
  }
}

int main(){
    Triangle(5);
    return 0;
}