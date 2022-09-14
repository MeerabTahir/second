// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country
// "Now is the time for all good men to come to the aid of their "
// Inputting a 1 will use the word party. Any other number will use the word country.
// Meerab Tahir

#include <iostream>
#include <string>
using namespace std;
void writeProverb(int wordCode);
    
int main (){
int wordCode;
cout << "Given the phrase:" << endl; 
cout << "Now is the time for all good men to come to the aid of their ___"<< endl; 
cout << "Input a 1 if you want the sentence to be finished with party" << endl;
cout << "Input a 2 if you want the sentence to be finished with country" << endl;
cout << "Please input your choice now" << endl; 
cin >> wordCode;
writeProverb(wordCode);
if (wordCode !=1 || wordCode !=2)
{
cin >> wordCode;
writeProverb(wordCode);
}
return 0;
}
void writeProverb(int word){
    if (word == 1){
    cout<<"Now is the time for all good men to come to the aid of their"<<" party"<<endl;
    }
    else if (word == 2){
    cout<<"Now is the time for all good men to come to the aid of their"<<" country"<<endl;
    }
    else{
        cout<<"I'm sorry but that is an incorrect choice; Please input a 1 or 2"<<endl;
    }
}
