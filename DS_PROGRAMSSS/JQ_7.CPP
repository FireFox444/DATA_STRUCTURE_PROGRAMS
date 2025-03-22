#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();

	int a[50],i,n,chk,cnt=0;

	cout<<"ENTER NUMBER OF ELEMENTS : ";
	cin>>n;

	cout<<"ENTER "<<n<<" ELEMENTS IN ARRAY : ";

	for(i=0;i<n;i++)
	{
		cout<<"\tENTER ELEMENT ["<<i+1<<"] : ";
		cin>>a[i];
	}

	cout<<"ENTER ANY NUMBER : ";
	cin>>chk;

	for(i=0;i<n;i++)
	{
		if(chk==a[i])
		cnt++;
	}

	cout<<"\nNUMBER "<<chk<<" IS PRESENT "<<cnt<<" TIMES IN THE ARRAY";

	getch();
}