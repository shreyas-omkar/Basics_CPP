#include<iostream.h>
#include<conio.h>
void main () {
char ch;
clrscr();
cout<<"Enter A Character\n";
cin>>ch;
if (ch>='A' && ch<='Z')
	cout<<"It Is An Uppercase Character";
else if (ch>='a' && ch<='z')
	cout<<"It Is A Lowercase Character";
else
	cout<<"It IS Not AN Alphabet";
getch();
}