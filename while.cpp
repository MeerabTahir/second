// Meerab Tahir
#include <iostream>
using namespace std;
int main(){

char letter;
do{
   cout << "Please enter a letter or enter X to exit the loop" << endl;
   cin >> letter;
   cout << "The letter you entered is " << letter << endl;
  }while (letter != 'x');
 return 0;
}


