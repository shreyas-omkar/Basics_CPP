#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class assign {
	private:
		int n;
	public:
		assign (int a) {
			n=a;
		};
		int cube();
};
inline int assign::cube() {
	return(n*n*n);
};
int main () {
	int n;
	clrscr();
	cout<<"Enter The Number\n";
	cin>>n;
	assign N=n;
	cout<<"Cube Of "<<n<<" is"<<N.cube();
	getch();
};