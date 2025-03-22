#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    clrscr();
    int a[50],i,n,x,h,l,m;

    cout<<"Search element using Binary Search\n";
    cout<<"----------------------------------\n";

    cout<<"Enter Number of Elements : ";
    cin>>n;
    
    cout<<"\n\nEnter elements in sorted order\n\n";
    
    for(i=1;i<=n;i++)
    {
      cout<<"\tEnter Element "<<i<<" : ";
      cin>>a[i];
    }
    
    cout<<"\n\nEnter element to be searched : ";
    cin>>x;

   
    l=1;
    h=n;

    while(l<=h)
    {
      m=(l+h)/2;
      
      if(x<a[m])
      h=m-1;

      else if(x>a[m])
      l=m+1;

      else
      {
        cout<<x<<" is present in array at location "<<m;
        getch();
        exit(0);
      }
    }

    cout<<x<<" is not present in array";
    getch();
}