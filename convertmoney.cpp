// This program will input American money and convert it to foreign currency
// Meerab tahir
// Prototypes of the functions
#include <iostream>
#include <iomanip>
using namespace std;

const float dollarToEuros = 1.06;
const float dollarToPesos = 9.73;
const float dollarToYen = 124.35;

void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);
int main ()
{
float dollars;
float euros;
float pesos;
float yen;
cout << fixed << showpoint << setprecision(2);
cout << "Please input the amount of American Dollars you want converted " 
<< endl;
cout << "to euros and pesos" << endl;
cin >> dollars;
convertMulti (dollars, euros, pesos);
cout<<"The amount in euros and pesos is "<<euros<<" euros"<<" and "<<pesos<<" pesos"<<endl;

cout << "Please input the amount of American Dollars you want converted\n";
cout << "to euros, pesos and yen" << endl;
cin >> dollars;
convertMulti(dollars, euros, pesos , yen);
cout<<"The amount in euros and pesos is "<<euros<<" euros,"<<pesos<<" pesos "<<" and "<<yen<<" yen "<<endl;

cout << "Please input the amount of American Dollars you want converted\n";
cout << "to yen" <<endl;
cin >> dollars;
cout<<"The amount in yen is "<<convertToYen(dollars)<<" yen"<<endl;

cout << "Please input the amount of American Dollars you want converted\n";
cout << " to euros" << endl;
cin >> dollars;
cout<<"The amount in euros is "<<convertToEuros(dollars)<<" euros"<<endl;

cout << "Please input the amount of American Dollars you want converted\n";
cout << " to pesos " << endl;
cin >> dollars;
cout<<"The amount in pesos is "<<convertToPesos(dollars)<<" pesos"<<endl;

return 0;
}
void convertMulti(float dollars, float& euros, float& pesos)
{ 
cout << "The function convertMulti with dollars, euros and pesos "
<< endl <<" was called with " << dollars <<" dollars"<< endl << endl;
euros = (dollars) *(dollarToEuros);
pesos = (dollars) *(dollarToPesos);
}
void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
cout << "The function convertMulti with dollars, euros, pesos and yen"
<< endl << " was called with " << dollars << " dollars" << endl << endl;
euros = (dollars) *(dollarToEuros);
pesos = (dollars) *(dollarToPesos);
yen   = (dollars) *(dollarToYen);
}
float convertToYen(float dollars)
{
cout << "The function convertToYen was called with " << dollars <<" dollars"
<< endl << endl;
return (dollars)*(dollarToYen);
}
float convertToPesos(float dollars)
{
cout << "The function convertToPesos was called with " << dollars
<< " dollars" << endl;
return (dollars)*(dollarToPesos);
}
float convertToEuros(float dollars)
{
cout << "The function convertToEuros was called with " << dollars
<< " dollars" << endl << endl;
return (dollars)*(dollarToEuros);
}

