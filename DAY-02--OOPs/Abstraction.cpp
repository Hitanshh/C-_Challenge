
//Abstraction in C++ is the process of hiding the implementation details of a class or method and showing only the necessary features to the user. It allows users to interact with an object or function without needing to know how it works internally, ensuring simplicity and reducing complexity.
//another example can be calculator , just make the function in such a way that user only have to write the variable and get sum w/o worrying about back process of code 

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