// Write a program that will read n elements in one dimensional array.
// Find out and print the total number of elements having value greater than 10.

#include<iostream.h>
#include<conio.h>

void main()
{

	clrscr();
	cout<<"Read n elements in one dimensional array.\nPrint the total number of elements having value > 10.\n";

	int a[50],i,n,cnt=0;

	cout<<"\nENTER NUMBER OF ELEMENTS : ";
	cin>>n;

	cout<<"\n\nENTER "<<n<<" ELEMENTS IN ARRAY : \n";

	for(i=0;i<n;i++)
	{
		cout<<"\tENTER ELEMENT "<<i+1<<" : ";
		cin>>a[i];

		if(a[i]>10)
		{
		     cnt++;
		}
		
	}

	cout<<"\nONE DIMENSIONAL ARRAY : \n";


	for(i=0;i<n;i++)
	{
		cout<<"\n\tELEMENT "<<i+1<<" IS : "<<a[i];
	}


	cout<<"\n\nTHERE ARE "<<cnt<<" ELEMENTS HAVING VALUE GREATER THAN 10\n";

	getch();

}