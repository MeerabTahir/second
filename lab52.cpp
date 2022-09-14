#include<iostream>
using namespace std;
int main(){
    int num,day;
    float total=0;
    int count1,count2,year1,year2;
    cout<<"How many tellers worked at Nation’s Bank during each of the last three years ?"<<endl;
    cin >>num;
    for(count1=1;count1<=num;count1++){
        cout<<"How many days was teller "<<count1<<" out sick during year 1 ?"<<endl;
        cin>>year1;
        total=total+year1;
        cout<<"How many days was teller "<<count1<<" out sick during year 1 ?"<<endl;
        cin>>year2;
        total=total+year2;
        
    }

        cout<<"The 2 tellers were out sick for a total of "<<total<< " during the last three year"<<endl;


    
    return 0;
}
