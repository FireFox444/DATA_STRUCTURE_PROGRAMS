#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int a[100][100],i,j,n,m;

	cout<<"ENTER NO OF ROWS : ";
	cin>>n;

	cout<<"ENTER NO OF COLUMNS : ";
	cin>>m;


	cout<<"ENTER "<<n<<"x"<<m<<" ELEMENTS IN ARRAY : \n";

	for(i=0;i<n;i++)
	{
	       for(j=0;j<m;j++)
	       {
			cin>>a[i][j];
	       }
	}

	cout<<"\n 2D ARRAY :: \n";

	for(i=0;i<n;i++)
	{
	       for(j=0;j<m;j++)
	       {
			cout<<a[i][j]<<"\t";
	       }
	       cout<<endl;
	}
	getch();
}
