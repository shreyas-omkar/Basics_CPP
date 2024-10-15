#include<iostream.h>
#include<conio.h>
void main () {
	int temp=0,num,flag=1;
	clrscr();
	cout<<"Enter The Number\n";
	cin>>num;
	temp=num;
	while (num>2)
		if (num%2==1) {
			flag=0;
			break;
		}
		else
			num=num/2;
	if (flag)
		cout<<temp<<" Is Power Of 2";
	else
		cout<<temp<< " Is Not The Power Of 2";
	getch();
}