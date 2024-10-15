#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
class deletion {
	private:
		int n, m[100], p, ele;
	public:
		void getdata();
		void remove();
		void display();
};
void deletion::getdata() {
	cout<<"Enter The Number Of Elements\n";
	cin>>n;
	cout<<"Enter The Elements\n";
	for(int i=0; i<n; i++)
		cin>>m[i];
	cout<<"Enter The Position Of The Element To Be Remooved (from 0 to "<<n<<")\n";
	cin>>p;
};
void deletion::remove() {
	if (p>n-1) {
		cout<<p<<" Is An Invalid Position\n";
		exit(0);
	};
	ele = m[p];
	for (int i=p+1; i<n; i++)
		m[i-1] = m[i];
	n--;
	cout<<ele<<" Is Successfully Removed\n";
};
void deletion::display() {
	for (int i=0; i<n; i++)
		cout<<setw(4)<<m[i]<<"\t";
};
void main () {
	clrscr();
	deletion D;
	D.getdata();
	D.remove();
	D.display();
	getch();
};