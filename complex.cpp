#include<iostream>
#include<cmath>
using namespace std;
class complex
{
private:
int realno;
int imaginaryno;
int mag;

public:
complex();
complex(int ,int );
void display();
void magnitude();
friend complex add(complex c1,complex c2);
};

complex::complex(){
    realno =0;
    imaginaryno =0;
}
complex::complex(int x,int y){
    realno = x;
    imaginaryno = y;
}
void complex::display(){
    cout<<"The complex no is "<<realno<<" + "<<imaginaryno<<"i"<<endl;
}
void complex::magnitude(){
    int mag = sqrt(pow(realno,2)+pow(imaginaryno,2));
    cout<<"The magnitude of complex no is "<<mag<<endl;
}
 complex add(complex c1,complex c2){
       int add=(c1.realno+c2.realno);
       int add1=(c1.imaginaryno+c2.imaginaryno);
       cout<<"The addition of complex no is "<<add<<" + "<<add1<<"i"<<endl;
}

int main(){
    complex c;
    c.display();
    complex c1(2,3);
    c1.display();
    c1.magnitude();
    complex c2(4,5);
    c2.display();
    c2.magnitude();
    complex c3(c2);
    c3.display();
    c3.magnitude();
    complex sum;
    sum = add(c1,c2);
    return 0;

}
