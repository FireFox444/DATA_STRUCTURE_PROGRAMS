#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();

	int a[3][5],i,j;
	cout<<"ENTER 3x5 ELEMENT IN ARRAY : \n\n";

	for(i=0;i<3;i++)
	{
	       for(j=0;j<5;j++)
	       {
			cout<<"ENTER ENLEMENT ["<<i+1<<"]["<<j+1<<"] : ";
			cin>>a[i][j];
	       }
	       cout<<endl;
	}

	cout<<"\n\n2D ARRAY : \n\n";
	for(i=0;i<3;i++)
	{
	       for(j=0;j<5;j++)
	       {
			cout<<"ELEMENT ["<<i+1<<"]["<<j+1<<"] : "<<a[i][j]<<endl;
	       }
	       cout<<"\n\n";
	}

	getch();
}



