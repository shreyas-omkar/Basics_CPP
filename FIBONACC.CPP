#include<iostream.h>
#include<conio.h>
void main () {
	int num,count,t1=0,t2=1,t3;
	clrscr();
	cout<<"Enter The Number Till Which You Want To Print Fibonacci Series\n";
	cin>>num;
	cout<<"Series: "<<t1<<"\t"<<t2<<"\t";
	t3=t1+t2;
	for (count=2;t3<=num;count++){
		cout<<t3<<"\t";
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
	cout<<"\nTotal Terms: "<<count;
	getch();
}