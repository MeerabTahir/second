// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.
// Meerab Tahir

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

