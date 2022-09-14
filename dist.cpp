#include"dist.h"
#include<iostream>
using namespace std;

void student ::display(){
    cout<<"The name is "<<name<<endl;
    cout<<"The rollno is "<<rollno<<endl;
}
int main(){
    student s("meerab",19);
    s.display();
    return 0;
}