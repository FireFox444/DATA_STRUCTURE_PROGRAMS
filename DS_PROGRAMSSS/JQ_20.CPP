#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();
    int a[50],n,i,j,t;
    
    cout<<"Program to sort Array using Insertion sort\n";
    cout<<"------------------------------------------\n\n";
  
    
    cout<<"Enter Number of Elements : ";
    cin>>n;
    
    cout<<endl;
    
    for(i=0;i<n;i++)
    {
      cout<<"\tEnter Element "<<i+1<<" : ";
      cin>>a[i];
    }
    
    
    cout<<"\n\nArray Before Insertion Sort: \n";
    for(i=0;i<n;i++)
    {
      cout<<"\n\tElement "<<i+1<<" : "<<a[i];
    }
    
    for(i=1;i<n;i++)
    {
      t=a[i];
      j=i-1;
      
      while((t<a[j]) && (j>=0))
      {
        a[j+1]=a[j];
        j--;
      }
      a[j+1]=t;
    }
    
    cout<<"\n\nArray After insertion Sort: \n";
    for(i=0;i<n;i++)
    {
      cout<<"\n\tElement "<<i+1<<" : "<<a[i];
    }
   getch();
}