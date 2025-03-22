#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int a[50],i,j,b,t,n;

	cout<<"ENTER NUMBER OF ELEMENTS :\n ";
	cin>>n;

	cout<<"ENTER "<<n<<" ELEMENTS IN ARRAY :\n ";

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n;i++)
	{
	    b=i;
	    for(j=0;j<n;j++)
	    {
			if(a[b]<a[j])
			{
				b=j;
			}

		t=a[b];
		a[b]=a[i];
		a[i]=t;
	    }
	}

	cout<<"SORTED ARRAY IN ASCENDING ORDER :\n ";

	for(i=0;i<n;i++)
	{
	 cout<<a[i]<<" ";
	}

	getch();
}