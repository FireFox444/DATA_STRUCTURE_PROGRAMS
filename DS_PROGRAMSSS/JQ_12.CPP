#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int a[20][20],i,j,k,t=0;

	for(i=0;i<3;i++)
	{
		cout<<"\nROW NO : "<<i+1<<endl;
		for(j=0;j<3;j++)
		{
			cout<<"\tENTER ELEMENT ["<<i+1<<"]["<<j+1<<"] :";
			cin>>a[i][j];
		}
		cout<<"\n";
	}

	for(i=0;i<3;i++)
	{
	  for(j=0;j<3-1;j++)
	  {
	    for(k=0;k<3-j-1;k++)
	    {
	      if(a[i][k]>a[i][k+1])
	      {
		t=a[i][k];
		a[i][k]=a[i][k+1];
		a[i][k+1]=t;
	      }
	    }
	  }
	}

	for(i=0;i<3;i++)
	{
		cout<<"\nROW NO : "<<i+1<<endl;
		for(j=0;j<3;j++)
		{
			cout<<"\n\tELEMENT ["<<i+1<<"]["<<j+1<<"] : "<<a[i][j];
		}
		cout<<"\n";
	}





	getch();
}