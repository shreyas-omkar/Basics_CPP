#include<iostream.h>
#include<conio.h>
void main () {
	int n1,n2,big;
	clrscr();
	cout<<"Enter Two Numbers\n";
	cin>>n1>>n2;
	big= n2;
	if (n1>n2) {
		big = n1;
	}
	cout<<"Big Number Of Two Is "<<big<<endl;
	getch();
}

