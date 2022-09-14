#include<iostream>
using namespace std;
int main(){
    int number;
    int total=0;
    int shirt=1;
    cout<<"Please input the favorite beverage of person #1: Choose 1, 2, 3, or 4 from the"<<
      "above menu or -1 to exit the program"<<endl;
      cin>>number;

      while (number !=-1){
          cout<<"Please input the favorite beverage of person #1: Choose 1, 2, 3, or 4 from the"<<
         "above menu or -1 to exit the program"<<endl;
          cin>>number;
          total = total+number;
          shirt++;
      }
        if (shirt==1){
            cout<<"no data entered"<<endl;
        }
        else 
           cout<<"The total number of people surveyed is"<<shirt-1<<endl;
        return 0;   
}