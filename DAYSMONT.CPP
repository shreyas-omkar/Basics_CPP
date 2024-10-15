#include<iostream.h>
#include<conio.h>
void main () {
int days,months,years;
clrscr();
cout<<"Enter Number Of Days\n";
cin>>days;
years=days/365;
days=days%365;
months=days/30;
days=days%30;
cout<<"Years "<<years<<" Months "<<months<<" days "<<days;
getch();
}