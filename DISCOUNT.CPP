#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main () {
int i,f,d;
clrscr();
cout<<"Enter The Amount Of Purchase\n";
cin>>i;
if (i<=1000)
d=0;
else
d=i*0.08;
f=i-d;
cout<<"Your Purchase Price: "<<i<<endl<<" Your Discount: "<<d<<endl<<" Your Final Price: "<<f;
getch();
}