#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
class insertion {
    private: int n, m[100], elem, p;
    public:
        void get_data();
        void insert();
        void display();
};
void insertion::get_data() {
    std::cout<<"How many elements?\n";
    std::cin>>n;
    std::cout<<"Enter elements\n";
    for (int i = 0; i < n; i++)
    {
        std::cin>>m[i];
    }
    std::cout<<"Enter elments to be inserted\n";
    std::cin>>elem;
    std::cout<<"Enter the position (0 to "<<n<<"):\n";
    std::cin>>p;
}
void insertion::insert() {
    if (p>n)
    {
        std::cout<<p<<"is invalid position";
        exit(0);
    }

    for (int i = n; i >= p; i--)
    {
        m[i+1] = m[i];
    }
    m[p] = elem;
    n++;
    std::cout<<elem<<" is successfully inserted\n ";  
}
void insertion::display() {
    std::cout<<"The array after the insertion is";
    for (int i = 0; i < n; i++)
    {
	std::cout<<std::setw(4)<<m[i];
    }
    }
    int main () {
	insertion I;
	I.get_data();
	I.insert();
	I.display();
	getch();
    return 0;
    }