#include<iostream.h>
#include<conio.h>
void main () {
	int yr;
	clrscr();
	cout<<"Enter The Year In Format YYYY\n";
	cin>>yr;
	if (yr%4==0 && yr%100!=0 || yr%400==0)
		cout<<yr<<" Year Is A Leap Year";
	else
		cout<<yr<<" Year Is Not A Leap Year";
	getch();
}