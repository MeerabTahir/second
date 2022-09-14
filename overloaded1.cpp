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
bool operator!=(const Typelab&) const;
void print() const;
Typelab();
Typelab(float x,float y);
};

Typelab::Typelab(){
    value1 = 0;
    value2 = 0;
}
Typelab::Typelab(float x,float y){
    value1 = x;
    value2 = y;
}
void Typelab::print()const{
    cout<<"Lab1 ("<<value1<<","<<value2<<")"<<endl;
}
bool Typelab::operator!= (const Typelab& lab) const
{
    return((value1 != lab.value1) || (value2 != lab.value2));

}

int main(){
    Typelab lab1(2,3);
    Typelab lab2(4,5);
    cout<<"";lab1.print();
    cout<<"";lab2.print();
    if(lab1 != lab2)
      cout<<"lab1 and lab2 are not equal"<<endl;
    else
      cout<<"lab1 and lab2 are equal"<<endl;   
       return 0;
}
