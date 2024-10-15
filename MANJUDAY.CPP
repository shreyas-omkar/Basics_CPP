#include<iostream.h>
#include<conio.h>
void main()
{
	int  totalsec,min,hrs,secs;
	clrscr();
	cout<<"Enter the total seconds\n";
	cin>>totalsec;
		hrs=totalsec/3600;
		totalsec=totalsec%3600;
		min=totalsec/60;
		secs=totalsec % 60;
	cout<<"Hours="<<hrs<<endl;
	cout<<"Minutes="<<min<<endl;
	cout<<"seconds="<< secs<<endl;
	getch();
 }