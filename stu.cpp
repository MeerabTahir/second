#include<iostream>
using namespace std;
void LetterGrade(int,int,char&,int&);
int main(){
    int no,numericGrade,avg,sumGrade=0;
    char grade;
    cout<<"Enter the number of grades"<<endl;
    cin >> no;

    for(int i=1; i<=no ; i++){
        cout<<"Enter a numeric grade between 0-100"<<endl;
        cin >> numericGrade;
        sumGrade += numericGrade;
    }
    LetterGrade(sumGrade,no,grade,avg);
    cout<<"Your grade is "<<grade<<endl;
    return 0;
}
void LetterGrade(int sum,int num,char& grade,int& average){
    average = sum/num;
    if(average>=90 & average<=100)
       grade = 'A';
    else if (average>=80 & average<=89)
       grade = 'B';
    else if (average>=70 & average<=79)
       grade = 'C'; 
    else if (average>=60 & average<=69)
       grade = 'D'; 
    else
       grade = 'F';
}
