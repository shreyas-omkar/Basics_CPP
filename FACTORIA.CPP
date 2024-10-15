#include<iostream>
#include<conio.h>
int main () {
	long int num,i,fact=1;
	std::cout<<"Enter The Number\n";
	std::cin>>num;
	for (i=1;i<=num;i++)
		fact=fact*i;
	std::cout<<"Factorial Of "<<num<<" Is "<<fact;
	getch();
	return 0;
}