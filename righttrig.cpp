// This program will input the value of two sides of a right triangle and then 
// determine the size of the hypotenuse.
// Meerab Tahir

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    float a,b;
    float hyp;
    cout<<"Please input the value of two sides"<<endl;
    cin >> a >> b ;
    cout<<"The sides of the right triangle are "<< a <<" and " << b <<endl;
    hyp = sqrt(pow(a,2) + pow(b,2));
    cout<<"The hypotenuse is " <<setprecision(3)<<hyp << endl;

    return 0;
}


