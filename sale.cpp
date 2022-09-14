#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float num1,num2,num3;
    float AmericanColonial = 85.00;
    float modern = 57.50;
    float frenchClassic =127.75;
    float total1,total2,total3,total;
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"Please input the number of American Colonial chairs sold"<<endl;
    cin >> num1;
    cout<<"Please input the number of Modern chairs sold"<<endl;
    cin >> num2;
    cout<<"Please input the number of French Classical chairs sold"<<endl;
    cin >> num3;

   total1 = num1 * AmericanColonial;
   total2 = num2 * modern;
   total3 = num3 * frenchClassic;
   total = total1 + total2 + total3;

   cout<<"The total sales of American Colonial chairs $"<<total1<<endl;
   cout<<"The total sales of Modern chairs $"<<total2<<endl;
   cout<<"The total sales of frenchClassic $"<<total3<<endl;
   cout<<"The total sales of all chairs $"<<total<<endl;

   return 0;
}

