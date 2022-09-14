#include<iostream>
using namespace std;
class Typelab{
private:
float value1;
float value2;
public:
void setvalue(float x,float y);
float getvalue1() const;
float getvalue2() const;
void print() const;
Typelab operator+(const Typelab&) const;
Typelab();
Typelab(float x,float y);
};
void Typelab::print()const{
    cout<<"Lab1 ("<<value1<<","<<value2<<")"<<endl;
}
Typelab::Typelab(){
    value1 = 0;
    value2 = 0;
}
Typelab::Typelab(float x,float y){
    value1 = x;
    value2 = y;
}
Typelab Typelab ::operator+ (const Typelab& lab) const{
    Typelab templab;
    templab.value1 = value1 + lab.value1;
    templab.value2 = value2 + lab.value2;
    return templab;
}
int main(){
    Typelab lab1(2,3);
    Typelab lab2(4,5);
    Typelab lab3;
    lab3 = lab1 + lab2;
    cout<<"";lab1.print();
    cout<<"";lab2.print();
    cout<<"The sum of lab1 and lab2 is ";lab3.print();
        
       return 0;
}

