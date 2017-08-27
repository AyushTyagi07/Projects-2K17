#include<iostream>
using namespace std;
class Bus
{
	private:
	int Busno,Distance,Fare;
	char From[10],To[10],Type;
	public:
	Bus();
	void Allocate();
	void CalcFare();
	void show();
};
Bus::Bus()
	{
		Type='O';
		Fare=500;
	}
void Bus::Allocate()
	{
	 cout<<"Enter the Bus Number: ";
	 cin>>Busno;
	 cout<<"current bus stop: ";
	 cin>>From;
	 cout<<"Enter Destination: ";
	 cin>>To;
	 cout<<"Enter the Bus Type: ";
	 cin>>Type;
	 cout<<"Enter the Distance : ";
	 cin>>Distance;
	 CalcFare();
	}
	
void Bus::CalcFare()
	{
	switch(Type)
		{
			case 'O':Fare=15*Distance;
			break;
			case 'E':Fare=20*Distance;
			break;
			case 'L':Fare=24*Distance;
			break;
			case 'A' :cout<<"default";
				  Fare=15*Distance;
				break;
		}
	}

void Bus::show()
	{
	 cout<<"Bus Number: "<<Busno<<endl;
	 cout<<"From: "<<From<<endl;
	 cout<<"Destination: "<<To<<endl;
	 cout<<"Bus Type: "<<Type<<endl;
	 cout<<"Distance : "<<Distance<<endl;
	 cout<<"Fare: "<<Fare<<endl;		
	}
int main()
{
Bus b1;
b1.Allocate();
b1.show();
return 0;
}
