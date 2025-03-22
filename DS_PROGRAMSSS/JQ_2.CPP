// Write a program to input n integer elements in one dimensional array. Display all the elements

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();

	cout<<"Write a program to input n integer elements in one dimensional array.\nDisplay all the elements\n";

	int a[50],i,n;

	cout<<"ENTER NUMBER OF ELEMENTS : ";
	cin>>n;

	cout<<"ENTER "<<n<<" ELEMENTS IN ARRAY : ";
	
	for(i=0;i<n;i++)
	{
		cout<<"\tENTER ELEMENT ["<<i+1<<"] : ";
		cin>>a[i];
	}

	cout<<"\nONE DIMENSIONAL ARRAY : \n";

	for(i=0;i<n;i++)
	{
		cout<<"\n\tELEMENT ["<<i+1<<"] IS : "<<a[i];
	}
	getch();

}