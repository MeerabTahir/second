#include<iostream>
using namespace std;

void swap(int ,int ,int );
int main(){
    int firstnumber,secondnumber,temp;
    cout<<"Enter the first number"<<endl;
    cout<<"Then hit enter"<<endl;
    cin >> firstnumber;
    cout<<"Enter the second number"<<endl;
    cout<<"Then hit enter"<<endl;
    cin >> secondnumber;

    cout<<"You input the numbers as "<<firstnumber<<" and "<<secondnumber<<endl;
    swap(firstnumber,secondnumber,temp);
    return 0;
}
void swap(int first,int second ,int temp1){
       temp1 = first;
       first = second;
       second = temp1;
       cout<<"After swapping, the first number has the value of "<<first
       <<" which was the value of the second number"<<endl;
       cout<<"The second number has the value of "<<second
       <<" which was the value of the first number"<<endl;
}
