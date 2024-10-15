#include<iostream.h>
#include<conio.h>
void main () {
	int a,b,c,largest,smallest,seclargest;
	clrscr();
	cout<<"Enter Any Three Numbers\n";
	cin>>a>>b>>c;
	largest=a;
	if (b>largest)
		largest=b;
	if (c>largest)
		largest=c;
	smallest=a;
	if (b<smallest)
		smallest=b;
	if (c<smallest)
		smallest=c;
	seclargest=(a+b+c)-(largest+smallest);
	cout<<"Largest Number: "<<largest<<"\nSecond Largest Number: "<<seclargest<<"\nSmallest Number: "<<smallest;
	getch();
}