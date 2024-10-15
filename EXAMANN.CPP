#include<iostream.h>
#include<conio.h>
void main () {
	float a,b,temp=0;
	clrscr();
	cout<<"Enter Any Two Numbers\n";
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Exchanging values a: "<<a<<" b: "<<b;
	getch();
}