#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float grade1;
    float grade2;
    float grade3;
    float average;
    
    cout<<setprecision(2)<<fixed<<showpoint<<endl;

    cout<<"Please input the first grade"<<endl;
    cin >> grade1;
    cout<<"Please input the second grade"<<endl;
    cin >> grade2;
    cout<<"Please input the third grade"<<endl;
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / 3;
    cout<<"The average of three grade is "<<average<<endl;

    return 0;
}