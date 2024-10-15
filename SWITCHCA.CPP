
#include<iostream.h>
#include<conio.h>
void main (){
in s1,s2,s3,s4,s5,s6,n,p;
clrscr ();
cout<<"enter marks for physics,cs and maths.\n";
cin>>s1>>s2>>s3>>s4>>s5>>s6;
p=(s1+s2+s3+s4+s5+s6) /6;
cout<<"percentage is "<<p<<" %\n";
n=p/10;
switch(n){
case 10:
case 9:
case 8:cout<<"distinction";
break;
case 7:
case 6:cout<<"first class";
break;
case 5:
case 4:cout<<"second class";
break;
case 3:cout<<"just pass";
break;
default:cout<<"fail";
}
getch();
}
