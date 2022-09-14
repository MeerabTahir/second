// This program tests whether or not an initialized value
// is equal to a value input by the user 
// Meerab Tahir

#include <iostream>
using namespace std;
int main( )
{
int num1; 
int num2;  
   cout << "Please enter an num1" << endl;
   cin >> num1;
   cout << "Please enter an num2" << endl;
   cin >> num2;
   cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
   if (num1 == num2){
   cout<<"The values are same"<<endl;
   cout << "Hey, that's a coincidence!" << endl; 
   }
   else
   cout << "The values are not the same" << endl;

return 0;
}


