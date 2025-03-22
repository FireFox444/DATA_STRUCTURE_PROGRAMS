#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();
    int a[50],n,l,i,k,ex,t;

    cout<<"Program to sort Array using Bubble sort\n";
    cout<<"---------------------------------------\n\n";

    cout<<"Enter Number of Elements : ";
    cin>>n;
    l=n;

    cout<<endl;
    for(i=1;i<=n;i++)
    {
      cout<<"\tEnter Element "<<i<<" : ";
      cin>>a[i];
    }


    cout<<"\n\nArray Before Bubble Sort: \n";
    for(i=1;i<=n;i++)
    {
      cout<<"\n\tElement "<<i<<" : "<<a[i];
    }

    for(i=1;i<n;i++)
    {
      ex=0;
      for(k=1;k<l;k++)
      {
	if(a[k]>a[k+1])
	{
	  t=a[k];
	  a[k]=a[k+1];
	  a[k+1]=t;
	  ex++;
	}
      }

      if(ex==0)
       break;
      else
	l--;
    }

    cout<<"\n\nArray After Bubble Sort: \n";
    for(i=1;i<=n;i++)
    {
      cout<<"\n\tElement "<<i<<" : "<<a[i];
    }

   getch();
 }