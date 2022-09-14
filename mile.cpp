#include<iostream>
#include<iomanip>
using namespace std;

void formula(float,float,float&);
int main(){
    float mile,hour;
    float mileperhour;
    
    cout<<"Please input the miles travelled"<<endl;
    cin >> mile;
    cout<<"Please input the hours travelled"<<endl;
    cin >> hour;
    formula(mile,hour,mileperhour);
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"Your speed is "<<mileperhour<<" miles per hour"<<endl;
}
void formula(float mil,float hrs,float& mph)
{
     mph = mil/hrs;
}     

