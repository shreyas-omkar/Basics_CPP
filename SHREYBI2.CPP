#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class sum {
	private : double a, b, sum;
		char opr;
	public:
	sum () {
		int p, q;
		a=p;
		b=q;
	}
	void sumup () {
		cout<<"Enter Two Numbers\n";
		cin>>a>>b;
		cout<<"Enter Operation A:Addition S: Subtraction M:Multiplication D: Division\n";
		cin>>opr;
		if (opr=='A') {
			sum = a+b;
		} else if (opr=='S') {
			sum = a-b;
		}else if (opr=='M') {
			sum= a*b;
		}else if (opr=='D') {
			sum = a/b;
		}else {
		cout<<"You Have Entered Wrong Operation";
		exit(0);
		}
		cout<<"Your Awswer Is "<<sum;
	}
};
void main () {
	sum obj;
	clrscr();
	obj.sumup();
	getch();
}