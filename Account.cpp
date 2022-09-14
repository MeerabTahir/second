#include<iostream>
using namespace std;
class Account{
    private:
    int Ac_number;
    double Ac_balance;
    public:
    Account(){
        Ac_number = 0;
        Ac_balance = 0;
    }
    void setdata(){
        cout<<"enter bank number"<<endl;
        cin >> Ac_number;
        cout<<"enter bank balance"<<endl;
        cin >> Ac_balance;
    }
    void showdata(){
        cout<<"the account no is "<<Ac_number<<endl;
         cout<<"the account balance is "<<Ac_balance<<endl;
    }
    
    
};
int main(){
    Account Ac;
    Ac.setdata();
    Ac.showdata();
}
