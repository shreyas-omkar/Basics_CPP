#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
#include<process.h>
class funcoverload {
	private:
		float s;
	public:
		double area (double a) {
			return a*a;
		};
		double area (double l, double b) {
			return l*b;
		};
		double area (double a, double b, double c) {
			s = (a+b+c)/2.0;
			return (sqrt(s*(s-a)*(s-b)*(s-c)));
		};
};

void main () {
	clrscr();
	double x, y, z;
	int sides;
	funcoverload f1;
	cout<<"ENter The Number Of Sides\n";
	cin>>sides;
	if (sides == 1) {
		cout<<"Enter The Length Of Square\n";
		cin>>x;
		cout<<"Area of Square Is "<<f1.area(x);
	} else if (sides == 2) {
		cout<<"Enter The Length And Breadth Of Rectangle\n";
		cin>>x>>y;
		cout<<"Area Of Rectangle Is "<<f1.area(x,y);
	} else if (sides == 3) {
		cout<<"Enter The Length Of Three Sides Of A Triangle\n";
		cin>>x>>y>>z;
		cout<<setprecision(8);
		cout<<"Area Of Triangle Is "<<f1.area(x,y,z);
	} else
		cout<<"Wrong Entry";
	getch();
};