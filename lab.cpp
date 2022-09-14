#include<iostream>
using namespace std;
int main(){
    char letter = 'F';
    string word = "passed";
switch(letter)
{
case 'A': cout << "Your grade is A." << endl;
break;
case 'B': cout << "Your grade is B." << endl;
break;
case 'C': cout << "Your grade is C." << endl;
break;
case 'D': cout << "Your grade is D." << endl;
break;
case 'F': word = "failed";
break;
default: cout << "You did not enter an A,B,C,D or F" << endl;
}
if (word == "passed")
cout << "You passed" << endl;
else
cout << "You failed" << endl;

    return 0;
}