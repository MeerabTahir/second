#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int rollno;

public:
student(string x)
{
    name = x;
    rollno = 0;
}
void display(){
    cout<<"The name is "<<name<<endl;
    cout<<"The rollno is "<<rollno<<endl;
}
};
int main(){
    student s("meerab");
    s.display();
    return 0;
}