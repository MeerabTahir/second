#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
	protected:
	int usn,age;
	char name[20];

};
class Ug : public Student
{
	int sem,fee,sti;

	public:
	void getdata()
	{
        cout<<"******Undergraduate Student******"<<endl;
	    cout<<"enter Name"<<endl;
        cin>>name;
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"enter semester"<<endl;
        cin>>sem;
        cout<<"enter fee"<<endl;
        cin>>fee;
        cout<<"enter student id"<<endl;
        cin>>sti;


	}

	void display()
	{
		cout<<name<<"\t"<<age<<"\t"<<sem<<"\n"<<sti<<"\n"<<endl;
	}

	int getsem()
	{
		return(sem);
	}

	int getage()
	{
		return(age);
	}

};
class Pg : public Student
{
	int sem,fee,sti;

	public:
	void getdata()
	{
        cout<<"******Postgraduate Student******"<<endl;
	    cout<<"enter Name"<<endl;
        cin>>name;
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"enter semester"<<endl;
        cin>>sem;
        cout<<"enter fee"<<endl;
        cin>>fee;
        cout<<"enter student id"<<endl;
        cin>>sti;
	
	}

	void display()
	{
		cout<<name<<"\t"<<age<<"\t"<<sem<<"\n"<<sti<<"\n"<<endl;
	}

	int getsem()
	{
		return(sem);
	}

	int getage()
	{
		return(age);
	}

};

int main()
{
Pg p[2];
Ug u[2];

u[2].getdata();
cout<<""<<endl;
p[2].getdata();
cout<<"Undergraduate Student"<<endl;
u[2].display();
cout<<""<<endl;
cout<<"Postgraduate Student"<<endl;
p[2].display();

return 0;

}
