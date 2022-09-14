#include <iostream>
using namespace std;
const int NUMBEROFTESTS = 5;
int main()
{
int score ; // the individual score read in
float total = 0.0; // the total of the scores
float average; // the average of the scores
int test = 1; // counter that controls the loop
while (test <= NUMBEROFTESTS) // Note that test is 1 the first time
// the expression is tested
{
cout << "Enter your score on test " << test << ": " << endl;
cin >> score;
total = total + score;
test++;
}
average = total / NUMBEROFTESTS;
cout << "Your average based on " << NUMBEROFTESTS
<< " test scores is " << average << endl;
return 0;
}