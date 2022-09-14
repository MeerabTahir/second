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
student(string x,int y){
    name = x;
    rollno = y;
}
void display();

};