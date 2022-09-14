#include<iostream>
using namespace std;
class BankAccount{
    private:
    int Ac_no;
    string Ac_holder_name;
    float Ac_balance;
    public:
    BankAccount(){
        Ac_no = 0;
        Ac_holder_name = "";
        Ac_balance = 0;
    }
    BankAccount(int x,string y){
        Ac_no = x;
        Ac_holder_name = y;
        Ac_balance = 0;
    }
    BankAccount(int x,string y,float z){
        Ac_no = x;
        Ac_holder_name = y;
        Ac_balance = z;
    }
     void showdata(){
        cout<<"The account no is "<<Ac_no<<endl;
        cout<<"The account holder name is "<<Ac_holder_name<<endl;
        cout<<"the account balance is "<<Ac_balance<<endl;
    }
};
int main(){
    BankAccount B;
    B.showdata();
    BankAccount B1(001,"Meerab");
    B1.showdata();
    BankAccount B1(002,"Malaika",75000);
    B1.showdata();
    return 0;
}