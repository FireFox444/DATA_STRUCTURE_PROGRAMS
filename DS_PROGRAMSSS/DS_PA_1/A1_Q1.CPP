
// Write a program that will read n elements in one dimensional array. 
// Print all the numbers as well as average of all numbers as an output

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	cout<<"Read n elements in one dimensional array.\nPrint the array and AVG of all element\n";
	
	int a[50],i,n,sum=0,avg=0;

	cout<<"\nENTER NUMBER OF ELEMENTS : ";
	cin>>n;

	cout<<"\n\nENTER "<<n<<" ELEMENTS IN ARRAY : \n";


	for(i=0;i<n;i++)
	{
		cout<<"\tENTER ELEMENT "<<i+1<<" : ";
		cin>>a[i];
		sum=sum+a[i];
	}

	cout<<"\nONE DIMENSIONAL ARRAY : \n";

	for(i=0;i<n;i++)
	{
		cout<<"\n\tELEMENT "<<i+1<<" IS : "<<a[i];
	}

	avg=sum/n;
	cout<<"\n\n\tAVERAGE IS : "<<avg;

	getch();

}