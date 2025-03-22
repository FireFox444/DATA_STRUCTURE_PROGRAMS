// Write a program that will read n elements in one dimensional array.
// Find out the total number of odd elements in the array.
// Print all elements and total number of odd elements.


#include<iostream.h>
#include<conio.h>

void main()
{

	clrscr();
	cout<<"Read n elements in one dimensional array.\nPrint all elements and total number of odd elements.\n";

	int a[50],i,n,cnt=0;

	cout<<"\nENTER NUMBER OF ELEMENTS : ";
	cin>>n;

	cout<<"\n\nENTER "<<n<<" ELEMENTS IN ARRAY : \n";

	for(i=0;i<n;i++)
	{
		cout<<"\tENTER ELEMENT "<<i+1<<" : ";
		cin>>a[i];

		if(a[i]%2!=0)
		{
		     cnt++;
		}
		
	}

	cout<<"\nONE DIMENSIONAL ARRAY : \n";


	for(i=0;i<n;i++)
	{
		cout<<"\n\tELEMENT "<<i+1<<" IS : "<<a[i];
	}


	cout<<"\n\nTOTAL NO OF ODD NUMBERS ARE : "<<cnt;

	getch();

}