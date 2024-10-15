#include<iostream.h>
#include<conio.h>;
class assign {
	private :
		int n;
	public:
		assign(int a) {
			n=a;
		};
		int cube ();
};
int assign::cube () {
	return n*n*n;
};
int main () {
	clrscr();
	int n;
	cout<<"Enter The Number\n";
	cin>>n;
	assign N=n;
	cout<<"Cube Of "<<n<<" is "<<N.cube();
	getch();
};