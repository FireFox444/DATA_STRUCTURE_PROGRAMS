#include<iostream.h>
#include<iomanip.h>
#include<conio.h>


void main()
{
  clrscr();

  char t[16];   
  int i,p,l,r;

  cout<<"Program to Find left and right child node from parent node \n";
  cout<<"----------------------------------------------------------\n";


  for(i=1;i<16;i++)
  {
    cout<<"\nEnter Element "<<i<<" : ";
    t[i]=cin.get();
    cin.ignore();
  }    

  cout<<"\n";

  for(i=1;i<16;i++)
  {
    cout<<setw(3)<<i;
  }
  
  cout<<endl;

  for(i=1;i<16;i++)
  {
    cout<<"  "<<t[i];
  }
  
  cout<<"\n\nEnter Parent Position : ";
  cin>>p;
  
  if(t[p]==' ')
   cout<<"\nNo Parent present at given location";

  else
  {
    cout<<"\n\n\tParent at location "<<p<<" is "<<t[p];

    l=p*2;
    r=p*2+1;

    if(t[l]==' ')
      cout<<"\n\tLeft child not exist";
    else
     cout<<"\n\tLeft child at location "<<l<<" is "<<t[l];

    if(t[r]==' ')
      cout<<"\n\tRight child not exist";
    else
      cout<<"\n\tRight child at location "<<r<<" is "<<t[r];
  }
  getch();
}