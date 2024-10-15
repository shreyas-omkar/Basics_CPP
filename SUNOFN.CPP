#include<iostream.h>
#include<conio.h>
void main () {
	int num[50], n,i,sum;
	float avg;
	clrscr();
	cout<<"How Many Numbers?\n";
	cin>>n;
	cout<<"Enter Numbers\n";
	for (i=0;i<n;i++){
		cin>>num[i];
		sum=0;
	};
	for (i=0;i<n;i++){
		sum=sum + num[i];
		avg=(float)sum/n;
	};
	cout<<"Sum Is "<<sum<<" And Average Is "<<avg;
	getch();
}

