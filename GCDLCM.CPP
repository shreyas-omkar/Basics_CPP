#include<iostream.h>
#include<conio.h>
void main () {
int a,b,rem=0,prod,gcd,lcm;
clrscr();
cout<<"Enter Any Two Numbers\n";
cin>>a>>b;
prod=a*b;
while (b!=0){
	rem=a%b;
	a=b;
	b=rem;
	};
gcd=a;
lcm=prod/gcd;
cout<<"GCD: "<<gcd<<" LCM: "<<lcm;
getch();
}