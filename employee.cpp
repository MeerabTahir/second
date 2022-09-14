#include <iostream>
using namespace std;
class Employee{
private:
int EmpNo;
float EmpComp;

public:
void getdata(){
    cout<<"Enter Your Empno"<<endl;
    cin >> EmpNo;
    cout<<"Enter Your Emp compensation"<<endl;
    cin >> EmpComp;
}
void display(){
    cout<<"The Employee no is "<<EmpNo<<endl;
    cout<<"The Employee compensation is "<<EmpComp<<endl;
    
}
};
int main(){
    Employee E1,E2,E3;
    E1.getdata();
    E1.display();
    E2.getdata();
    E2.display();
    E3.getdata();
    E3.display();
}
