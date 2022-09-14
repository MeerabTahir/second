// This program will bring in two prices and two quantities of items 
// from the keyboard and print those numbers in a formatted chart.
// Meerab Tahir

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float price1,price2;
    int quantity1,quantity2;

    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"Please input the price and quantity for first item"<<endl;
    cin >> price1;
    cin >> quantity1;

    cout<<""<<endl;

    cout<<"Please input the price and quantity for second item"<<endl;
    cin >> price2;
    cin >> quantity2;
    
    cout<<setw(15)<<  "PRICE" <<setw(15)<<  "QUANTITY\n"<<endl;
    cout<<setw(15)<<price1<<setw(8)<<quantity1<<endl;
    cout<<setw(15)<<price2<<setw(8)<<quantity2<<endl;

    return 0;
}
