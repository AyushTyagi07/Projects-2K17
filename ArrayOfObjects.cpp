/*			
  Title: Program to enter details of 5 Students 
*/
#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
	private:
		char name[30];
		int age;
		int roll;
		char sec;

	public:
		void input();
		void show();

};

int main()
{
	 student s[5];
	int i=0;
	for(i=0;i<5;i++)
		{
			s[i].input();
		}
	for(i=0;i<5;i++)
		{
			s[i].show();
		}
	return 0;
}

void student::input()
{
	cout<<"\nEnter the name of the student : ";
	getchar();
	cin.getline(name,30);
	cout<<"\nAge of the student : ";
	cin>>age;
	cout<<"Roll number of the student : ";
	cin>>roll;
	cout<<"Section of student : ";
	cin>>sec;
} 

void student::show()
{
	cout<<"\nName of the student : "<<name;
	cout<<"\nAge of the student : "<<age;
	cout<<"\nRoll number of the student : "<<roll;
	cout<<"\nSection of student : "<<sec<<endl;
}
