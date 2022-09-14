#include<iostream>
using namespace std;
int main(){
    float month,state_tax,local_tax;
    float total_state_tax,total_local_tax;

    cout<<"Please input the total sales for the month"<<endl;
    cin >> month;
    cout<<"Please input the state tax percentage in decimal form (.02 for 2%)"<<endl;
    cin >> state_tax;
    cout<<"Please input the local tax percentage in decimal form (.02 for 2%)"<<endl;
    cin >> local_tax;
    
    total_state_tax = month * state_tax;
    total_local_tax = month * local_tax;
    
    cout<<"The total sales for the month is $"<<month<<endl;
    cout<<"The state tax for the month is $"<<total_state_tax<<endl;
    cout<<"The local tax for the month is $"<<total_local_tax<<endl;
}
