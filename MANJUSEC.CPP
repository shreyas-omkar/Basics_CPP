#include<iostream.h>
#include<conio.h>
void main()
{
	int totaldays, days, year, month;
	clrscr();
	cout<<"Enter the total days\n";
	cin>>totaldays;
		year=totaldays/365;
		totaldays=totaldays%365;
		month=totaldays/30;
		days=totaldays%30;
	cout<<"Years="<<year<<endl;
	cout<<"Months="<<month<<endl;
	cout<<"Days="<<days<<endl;
	getch();
}