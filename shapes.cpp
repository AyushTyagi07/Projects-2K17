#include<iostream>
using namespace std;
class shapes
{
private :
	int c,s,l,b;
	float r;
public:
	void area(int);
	void area(float);
	void area(int,int);
	void getdata();
};

void shapes::getdata()
{
	cout<<"choose the shape to calculate its area\n 1: square\n 2: circle\n 3: rectangle\n";
	cin>> c;
	switch(c)
	{
		case 1:cout<<"enter the side of square:";
			cin>>s;
			area(s);
			break;
		case 2:cout<<"enter the radius of circle: ";
			cin>>r;
			area(r);
			break;
		case 3:cout<<"enter the length and breath of rectangle: ";
			cin>>l>>b;
			area(l,b);
			break;
		default : cout<<"not an option";
	}
}
void shapes::area(int s)
	{
	 int a;
	 a=s*s;
	 cout<<"area : "<<a<<endl;
	}
void shapes::area(float r)
	{
	 float a;
	 a=3.14*r*r;
	 cout<<"area : "<<a<<endl;
	}
void shapes::area(int l,int b)
	{
	 int a;
	 a=l*b;
	 cout<<"area : "<<a<<endl;
	}
int main()
{
	shapes s1;
	s1.getdata();
	return 0;
}

