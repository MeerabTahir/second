// This program prints "You Pass" if a student's average is 
// 60 or higher and prints "You Fail" otherwise
// Meerab Tahir

#include <iostream>
using namespace std;
int main()
{
float average; 
   cout << "Input your average:" << endl;
   cin >> average;
   if (average > 100)
   cout << "Invalid data" << endl;
   else if (average >= 90 && average <= 100)
   cout << "Grade A" << endl;
   else if (average >= 80 && average <= 89)
   cout << "Grade B" << endl;
   else if (average >= 60 && average <= 79)
   cout << "You Pass" << endl;
   else if (average >= 0 && average <= 59)
   cout << "You Fail" << endl;

   return 0;
}




