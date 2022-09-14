# second
****************************************************************************
// This program will determine the batting average of a player. 
// The number of hits and at bats are set internally in the program.
// Meerab Tahir

#include<iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main(){

    float batAvg;
    batAvg =float(HITS)/float(AT_BAT);

    cout<<"The batting average is "<<batAvg<<endl;

    return 0;
}
****************************************************************************

// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

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
*****************************************************************************

// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.

#include<fstream>
#include<iomanip>
using namespace std;
int main(){
    ifstream dataIn;
    ofstream dataOut;
    int quantity;
    float itemPrice;
    float totalBill;

    dataIn.open("transaction.dat");
    dataOut.open("bill.out");
    dataOut<<"Please input the number of items bought"<<endl;
    dataIn>>quantity;
    dataOut<<quantity<<endl;
    dataOut<<"Please input the total price"<<endl;
    dataIn>>itemPrice;
    dataOut<<itemPrice<<endl;
    dataOut<<setprecision(2)<<fixed<<showpoint<<endl;
    totalBill = itemPrice * quantity;
    dataOut<<"The no of item are $ "<<totalBill<<endl;
    return 0;
}
***************************************************************

// This program will output the circumference and area
// of the circle with a given radius.

#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14;
const double RADIUS = 5.4;
int main(){
   float area; 
   float circumference; 
   circumference = 2 * PI * RADIUS;
   area = PI * (pow(RADIUS,2));
   cout<<"The circumference of a circle is "<<circumference<<endl;
   cout<<"The area of a circle is "<<area<<endl;
   return 0;
} 
*********************************************************************

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    
    float grade1;
    float grade2;
    float grade3;
    float total;
    float avg;
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"Please input the first grade"<<endl;
    cin >> grade1;
    cout<<"Please input the second grade"<<endl;
    cin >> grade2;
    cout<<"Please input the third grade"<<endl;
    cin >> grade3;
    
    total = grade1+grade2+grade3;
    avg = total/3;
    cout<<"The average of three grades is "<<avg<<endl;
    return 0;
}
*********************************************************************
