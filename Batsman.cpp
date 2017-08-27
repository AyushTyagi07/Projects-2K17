/*
  Title : Create a class named batsman with private members 
  bcode
  innings
  notout
  runs
  bname
  calavg
  batavg
  and member functions
  readdata()
  displaydata()
  */  
#include<iostream>
using namespace std;
class batsman
{
	private:
	int bcode,innings,notout,runs;
	float calavg;
	string bname;
	float batavg();
	public:
	void readdata();
	void displaydata();
};
  void batsman :: readdata()
{
	cout<<"Enter barcode of four digits::";
	cin>>bcode;
	cout<<"innings::";
	cin>>innings;
	cout<<"Not out::";
	cin>>notout;
	cout<<"Runs::";
	cin>>runs;
	cout<<"Batsman name::";
	cin	>>bname;
  c	alavg=batavg();
}

float batsman::batavg()
{
	return(runs/(innings-notout));
}

void batsman :: displaydata()
{
	cout<<"batsman name::"<<bname<<endl;
	cout<<"Bar code::"<<bcode<<endl;	
	cout<<"Inning::"<<innings<<endl;
	cout<<"Runs::"<<runs<<endl;
	cout<<"Not out::"<<notout<<endl;
	cout<<"Batting average::"<<calavg<<endl;
}

int main()
{
	batsman p1;
	p1.readdata();
	p1.displaydata();
	return 0;
}

