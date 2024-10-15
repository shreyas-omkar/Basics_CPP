#include<iostream.h>
#include<conio.h>
void main () {
int s1, s2, s3, p, n;
clrscr();
cout<<"Enter The Marks Of Physics Chemistry & Maths\n";
cin>>s1>>s2>>s3;
p=(s1+s2+s3)/3;
cout<<"Your Percentage is "<<p<<" %\n";
n=p/10;
switch(n) {
case 10:
case 9 :
case 8 : cout<<"Distinction";
	 break;
case 7 :
case 6 : cout<<"First Class";
	 break;
case 5 :
case 4 : cout<<"Second Class";
	 break;
case 3 : cout<<"Just Pass";
	 break;
default: cout<<"Fail";
}
getch();
}