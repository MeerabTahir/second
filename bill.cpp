// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.
// Meerab Tahir

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    string itemName;
    int quantity;
    float itemPrice;
    float totalBill;
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"Please input the name of item"<<endl;
    getline(cin,itemName);
    cout<<"Please input the number of items bought"<<endl;
    cin >> quantity;
    cout<<"please input the price of each item"<<endl;
    cin >> itemPrice;
    cout<<"The item that you bought is "<<itemName<<endl;
    totalBill = itemPrice * quantity;
    cout<<"The total bill is $"<<totalBill<<endl;

    return 0;
}



