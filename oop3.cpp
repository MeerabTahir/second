#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int rollno;

public:

void display(){
    cout<<"The name is "<<name<<endl;
    cout<<"The rollno is "<<rollno<<endl;
}
};
int main(){
    student s;
    s.name = "meerab";
    s.rollno = 19;
    s.display();
    return 0;
}