#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int rollno;

public:
student()
{
    name = "";
    rollno = 0;
}
student(string x)
{
    name = x;
    rollno = 0;
}
student(string x , int y)
{
    name = x;
    rollno = y;
}
void display(){
    cout<<"The name is "<<name<<endl;
    cout<<"The rollno is "<<rollno<<endl;
}
};
int main(){
    student s,t,u;

    s.display();
    student s1("Meerab");
    s1.display();
    student s2("Meerab Tahir",19);
    s2.display();
    cout<<""<<endl;
    
    t.display();
    student t1("Ayesha");
    t1.display();
    student t2("Ayesha Tahir",12);
    t2.display();
    cout<<""<<endl;
    
    u.display();
    student u1("Abiha");
    u1.display();
    student u2("Abiha Irfan",14);
    u2.display();
    cout<<""<<endl;


    return 0;
}

