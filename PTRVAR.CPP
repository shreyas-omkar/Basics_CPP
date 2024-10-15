#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class student {
	private:
		int regno;
		char name[100];
		double fees;
	public:
		void getdata();
		void display();
};
void student::getdata() {
	cout<<"Enter The Register Number\n";
	cin>>regno;
	cout<<"Enter The Name Of The Student\n";
	cin>>name;
	cout<<"Enter the fees\n";
	cin>>fees;
};
void student::display() {
	cout<<"Student register no.: "<<regno<<endl;
	cout<<"Student Name: "<<name<<endl;
	cout<<"Stdent Fees: "<<fees<<endl;
};
void main() {
	clrscr();
	student s, *sp;
	sp = &s;
	sp->getdata();
	sp->display();
	getch();
};
