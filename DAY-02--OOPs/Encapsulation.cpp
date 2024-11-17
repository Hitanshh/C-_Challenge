
//Encapsulation is => wrapping up of data member and member function into a single unit called class.

#include <bits/stdc++.h>
using namespace std;

class ATM{

    int pincode;
    int balance=0;

    public:

    int account_number;
    string account_holder_name;
    void set_balance(int add_amount){
        balance = balance + add_amount;
    }
    void check_balance(){
        cout<<balance<<endl;
    }
    void set_pincode(int pincode){
        this->pincode= pincode;
    }
    void get_pincode(){
        cout<<pincode<<endl;
    }

};

int main(){

    ATM user;
    user.account_holder_name = "Hitansh";
    user.set_balance(500);
    user.check_balance();
    user.set_pincode(444);
    user.get_pincode();
    
    return 0;
}