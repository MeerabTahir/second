// This program has the user input a number n and then finds the
// mean of the first n positive integers
// Meerab Tahir
#include <iostream>
using namespace std;
int main()
{
int n;
int m; 
int total = 0; 
int mean ;
int counter = 0; 
cout << "Please enter value of n" << endl;
cin >> n;
cout << "Please enter value of m" << endl;
cin >> m;


for (int i = n; i <= m; i++)
{ 
    counter = counter +1;
    total = total + i;
    mean = (total) / counter;
} 
cout << "The mean average of values from " << n <<" to "
<<m << " is " << mean << endl;

return 0;
}
