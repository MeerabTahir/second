#include <iostream>
using namespace std;
int main()
{
int value;
int total = 0;
int number;
float mean;
cout << "Please enter a positive integer" << endl;
cin >> value;
if (value > 0)
{
for (number = 1; number <= value; number++)
{
total = total + number;
} 
mean = static_cast<float>(total) / value;
cout << "The mean average of the first " << value
<< " positive integers is " << mean << endl;
}
else
cout << "Invalid input - integer must be positive" << endl;
return 0;
}

