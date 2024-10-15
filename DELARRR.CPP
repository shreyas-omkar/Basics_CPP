#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
class deletion {
    private: int n, m[100], elem, p;
    public:
	void getdata();
	void remove();
	void display();
};
void deletion::getdata() {
    cout<<"How many elements?\n";
    cin>>n;
    cout<<"Enter elements\n";
    for (int i = 0; i < n; i++)
    {
	cin>>m[i];
    }
    cout<<"Enter the position (0 to "<<n-1<<"):\n";
    cin>>p;
}
Ppvoid deletion::remove() {
    if (p>n-1)
    {
	cout<<p<<"is invalid position";
	exit(0);
    }
    elem=m[p];

    for (int i = p+1; i <= n; i++)
    {
	m[i-1] = m[i];
    }
    n--;
    cout<<elem<<" is successfully deleted\n ";
}
void deletion::display() {
    cout<<"The array after the deletion is";
    for (int i = 0; i < n; i++)
    {
	cout<<setw(4)<<m[i];
    }
    }
    void main () {
	clrscr();
	deletion D;
	D.getdata();
	D.remove();
	D.display();
	getch();
    }