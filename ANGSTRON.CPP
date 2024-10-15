#include<iostream.h>
#include<conio.h>
void main () {
	int num,temp=0,rem=0,arm;
	clrscr();
	cout<<"Enter The Number\n";
	cin>>num;
	temp=num;
	do {
		rem=temp%10;
		arm=arm+rem*rem*rem;
		temp=temp/10;
	}
	while (temp!=0);
	if(num==arm)
		cout<<num<<" IS An Armstrong Number";
	else
		cout<<num<<" Is Not An Armstrong Number";
	getch();

}