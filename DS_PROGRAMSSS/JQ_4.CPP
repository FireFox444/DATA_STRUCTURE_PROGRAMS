#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();

	int a[50],n,i,mx;

	cout<<"ENTER NUMBER OF ELEMENTS : ";
	cin>>n;

	cout<<"ENTER "<<n<<" ELEMENTS IN ARRAY : ";

	for(i=0;i<n;i++)
	{
		cout<<"\tENTER ELEMENT ["<<i+1<<"] : ";
		cin>>a[i];
	}
	mx=a[0];

	for(i=0;i<n;i++)
	{
		if(mx<a[i])
		mx=a[i];
	}
	cout<<"\n\nMAXIMUM NUMBER IS  : "<<mx;
	getch();
}