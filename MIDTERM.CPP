#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class binary {
	private:
		int n, m[100], loc, ele;
	public:
		void getdata();
		void search();
		void display();
};
void binary::getdata() {
	cout<<"Enter The Number Of Elements\n";
	cin>>n;
	cout<<"Enter The Elements\n";
	for (int i=0; i<n; i++)
		cin>>m[i];
	cout<<"Enter The Element to Be Searched\n";
	cin>>ele;
};
void binary::display () {
	if (loc>=0) {
		cout<<"Position Of "<<ele<<" is "<<loc;
	}else
		cout<<"Search Was Unsuccessful\n";
};
void binary::search () {
	int beg, mid, end;
	loc=-1;
	beg=0;
	end= n-1;
	while (beg<=end) {
		mid = (beg+end)/2;
		if (ele==m[mid]) {
			loc = mid;
			break;
		} else if (ele < m[mid]) {
			end = mid-1;
		}else
			beg = mid+1;
	};
};
void main () {
	binary B;
	clrscr();
	B.getdata();
	B.search();
	B.display();
	getch();
};