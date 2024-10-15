#include<iostream.h>
#include<conio.h>
void main () {
int n,rem,sum=0;
clrscr();
cout<<"Enter The Number\n";
cin>>n;
while (n!=0) {
	rem=n%10;
	sum=sum+rem;
	n=n/10;
	};
cout<<"Your Sum Is: "<<sum;
getch();
}