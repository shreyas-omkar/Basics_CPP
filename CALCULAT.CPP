#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
class sum {
	private : float a, b, sum;
		char opr;
	public:
	sum () {
		int p, q;
		a=p;
		b=q;
	}
	void sumup () {
		std::cout<<"Enter Operation A:Addition S: Subtraction M:Multiplication D: Division R:Square Root \nNote!! It Is Case Sensitive Please Us It As Directed\n";
		std::cin>>opr;
		if (opr=='R') {
			std::cout<<"Enter A Number\n";
			std::cin>>a;
			sum = sqrt(a);
		} else {
				std::cout<<"Enter Two Numbers\n";
				std::cin>>a>>b;
				if (opr=='A') {
					sum = a+b;
				} else if (opr=='S') {
					sum = a-b;
				}else if (opr=='M') {
					sum= a*b;
				}else if (opr=='D') {
					sum = a/b;
				}
				else {
					std::cout<<"You Have Entered Wrong Operation";
					exit(0);
				};
		};
		std::cout<<"Your Awswer Is "<<sum;
	}
};
int main () {
	sum obj;
	obj.sumup();
	getch();
	return 0;
}