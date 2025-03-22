#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();
    int a[50],i,n,x;
    
    cout<<"Search element using Linear Search\n";
    cout<<"----------------------------------\n\n";
    
    cout<<"Enter Number of Elements : ";
    cin>>n;
    
    cout<<endl;
    
    for(i=1;i<=n;i++)
    {
      cout<<"\tEnter Element "<<i<<" : ";
      cin>>a[i];
    }
    
    cout<<"\n\nEnter element to be searched: ";
    cin>>x;
    
    a[n+1]=x;
    
    for(i=1;a[i]!=x;i++);
   
    cout<<"\n\n";
    
    if(i==n+1)
    {
      cout<<x<<" is not present in array";
   
    }
    else
    {
      cout<<x<<" is present in array at location "<<i;
    }
    
    getch();
}