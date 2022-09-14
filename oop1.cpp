#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int rollno;
public:
void setdata(string x,int y)
{
    name = x;
    rollno  = y;

}
void display(){
    cout<<"The name is "<<name<<endl;
    cout<<"The rollno is "<<rollno<<endl;
}
};
int main(){
    student s;
    s.setdata("meerab",19);
    s.display();
    return 0;
}