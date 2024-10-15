#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
 
    void main () {
        int a[50], i, n, largest, secondlargest;
        clrscr ();
        cout<<"How Many Elements?";
	cin>>n;
	cout<<"Enter Elements : ";
	for ( i = 0; i < n; i++)
	{
	    cin>>a[i];
	} ;
	if (a[0]>a[1])
	{
	    largest = a[0];
	    secondlargest = a[1];
	}else {
	    largest =a[1];
	    secondlargest = a[0];
	}
	for ( i = 0; i < n; i++)
        {
            if (a[i]>largest)
            {
                secondlargest = largest;
                largest = a[i];
            }
            else
            {
                if (a[i]>secondlargest)
                {
                    secondlargest = a[i];
                }
                
            }
            
        }
        cout<<"Largest = "<<largest<<endl;
        cout<<"Secondlargest = "<<secondlargest<<endl;
        getch();
    }