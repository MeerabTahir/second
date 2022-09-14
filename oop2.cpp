#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int rollno;

};

int main(){
    student s;
    s.name="meerab";
    s.rollno = 19;
    cout<<"The name is "<<s.name<<endl;
    cout<<"The rollno is "<<s.rollno<<endl;
    return 0;
}