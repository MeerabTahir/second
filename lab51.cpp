#include<iostream>
using namespace std;
int main(){

    float second=0;
    float height;
    float distance;
    float total=0;
    cout<<"Enter time"<<endl;
    cin >> second;
     cout<<"Enter height"<<endl;
     cin >> height;
    for(int i=0;i<=second;i++){
        distance=0.5*9.8*i*i;
    
        cout<<"the distance for "<<i<<"sec is"<<distance<<endl;
    }
    
    return 0;
}