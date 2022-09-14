#include<iostream>
using namespace std;
int main(){
    char in,out;
    float price = 3000 ,price1=8000;
    cout<<"Please input I if you are in-state or O if you are out-of-state:"<<endl;
    cin >> in;
    if (in == 'I'){
        cout<<"Please input y if you require room and board and n if you do not"<<endl;
        cin >>out;
        if (out =='y')
        cout<<"Your total bill for this semester is"<<price1<<endl;
        if (out =='n')
        cout<<"Your total bill for this semester is"<<price<<endl;
    }
    else if(in == 'O'){
       cout<<"Please input y if you require room and board and n if you do not"<<endl;
       cin >> out;
       if (out =='y')
       cout<<"Your total bill for this semester is "<<price1<<endl;
       if (out =='n')
       cout<<"Your total bill for this semester is "<<price<<endl;
    }
    return 0;

}