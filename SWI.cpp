// This program illustrates the use of the switch statement.
// Meerab Tahir
#include <iostream>
using namespace std;
int main()
{
char grade;
cout << "What grade did you earn in Programming I ?" << endl;
cin >> grade;
switch( grade ) 
{
case 'A': cout << "You Passed" << endl;
   break;
case 'B': cout << "You Passed" << endl;
   break;
case 'C': cout << "You Passed" << endl;
   break;
case 'D': cout << "You Passed" << endl;
   break;
}
switch(grade)
{
case 'A': cout << "an A - excellent work !" << endl;
   break;
case 'B': cout << "you got a B - good job" << endl;
   break;
case 'C': cout << "earning a C is satisfactory" << endl;
   break;
case 'D': cout << "while D is passing, there is a problem" << endl;
   break;
case 'F': cout << "you failed - better luck next time" << endl;
   break;
default: cout << "You did not enter an A, B, C, D, or F" << endl;
}
return 0;
}