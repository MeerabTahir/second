// This program demonstrates the use of characters and strings
// MEERAB TAHIR

#include<iostream>
using namespace std;
const string FAVOURITESODA = "Dr . Dolittle";
const char BESTARTING = 'A';
int main(){
    char rating;
    string favouriteSnack;
    int numberofPeople;
    int topChoiceTotal;
    string FAVOURITESODA;
    FAVOURITESODA = "cola";
    favouriteSnack = "cracker";
    rating = 'B';
    numberofPeople = 250;
    topChoiceTotal = 148;
    
    cout<<"The preferred soda is "<<FAVOURITESODA<<endl;
    cout<<"The preferred snack is "<<favouriteSnack<<endl;
    cout<<"Out of "<<numberofPeople<<" people "
    <<topChoiceTotal<<" chose these items! "<<endl;
    cout<<"Each of these products were given a rating of "
    <<BESTARTING<<" from our expert tasters"<<endl;
    cout<<"The other products were rated no higher than a "<<rating<<endl;

    return 0;
}
