// This program will output the circumference and area
// of the circle with a given radius.
// MEERAB TAHIR

#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14;
const double RADIUS = 5.4;
int main(){
   float area; 
   float circumference; 
   circumference = 2 * PI * RADIUS;
   area = PI * (pow(RADIUS,2));
   cout<<"The circumference of a circle is "<<circumference<<endl;
   cout<<"The area of a circle is "<<area<<endl;
   return 0;
} 
  


