#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class student {
	private:
		int regno;
		char name[20];
		int fees;
	public:
		void getdata();
		void display();
};
void student::getdata() {
	cout<<"Enter The Name Of The Student\n";
	cin.getline(name, 20);
	cout<<"ENter The Register Number\n";
	cin>>regno;
	cout<<"Emter The Fees Of The Student\n";
	cin>>fees;
};
void student::display() {
	cout<<"Student's Register Number Is "<<regno<<endl;
	cout<<"Student's Name Is "<<name<<endl;
	cout<<"Student's Fees Is "<<fees<<endl;
};
void main () {
	clrscr();
	student s, *sp;
	sp=&s;
	sp->getdata();
	sp->display();
	getch();
};