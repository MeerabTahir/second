// // This program takes two values from the user and then swaps them
// // before printing the values. The user will be prompted to enter
// // both numbers.
// // MEERAB TAHIR

// #include<iostream>
// using namespace std;
// int main(){
//     float firstNumber;
//     float secondNumber;
//     float temp;
    
//     cout<<"Enter the first number"<<endl;
//     cout<<"Then hit enter"<<endl;
//     cin>>firstNumber;
     
//     cout<<"Enter the second number"<<endl;
//     cout<<"Then hit enter"<<endl;
//     cin>>secondNumber;

//     cout<<"You input the numbers as  "<<firstNumber<<" and "<<secondNumber<<endl; 

//     temp=firstNumber;
//     firstNumber=secondNumber;
//     secondNumber=temp;
    
//     cout<<"After swaping the values of the two numbers are "<<firstNumber<<" and "<<secondNumber<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U') {
        cout << c << " is a vowel.";
    }
    else {
        cout << c << " is not a vowel.";
    }
    
    return 0;
}
