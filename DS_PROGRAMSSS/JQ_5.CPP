#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();

	int a[50],n,i,mn;

	cout<<"ENTER NUMBER OF ELEMENTS : ";
	cin>>n;

	cout<<"ENTER "<<n<<" ELEMENTS IN ARRAY : ";

	for(i=0;i<n;i++)
	{
		cout<<"\tENTER ELEMENT ["<<i+1<<"] : ";
		cin>>a[i];
	}
	mn=a[0];

	for(i=0;i<n;i++)
	{
		if(mn>a[i])
		mn=a[i];
	}
	cout<<"\n\nMANIMUM NUMBER IS  : "<<mn;
	getch();
}