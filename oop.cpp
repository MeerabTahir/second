#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int rollno;

public:
void getdata()
{
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your rollno"<<endl;
    cin >> rollno;
}
void display(){
    cout<<"The name is "<<name<<endl;
    cout<<"The rollno is "<<rollno<<endl;
}
};
int main(){
    student s;
    s.getdata();
    s.display();
    return 0;
}
