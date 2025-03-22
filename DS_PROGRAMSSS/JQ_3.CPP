#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();

	int a[50],i,n,sum=0;

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

	cout<<"\n\nSUM OF 1D ARRAY IS  : "<<sum;
	getch();
}