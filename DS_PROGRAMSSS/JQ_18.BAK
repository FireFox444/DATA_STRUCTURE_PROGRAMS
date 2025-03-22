#include<iostream.h>
#include<iomanip.h>
#include<conio.h>


void main()
{
  clrscr();
  char t[16];
  int i,p,c;
  
  cout<<"Program to Find Parent node from child node\n";
  cout<<"-------------------------------------------\n";

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

  cout<<"\n\nEnter Child Position : ";
  cin>>c;

  if(t[c]==' ')
  cout<<"\nNo Child present at given location";

  else
  {

    cout<<"\n\nChild at location "<<c<<" is "<<t[c];

    p=c/2;
   
    cout<<"\n\nParent at location "<<p<<" is "<<t[p];

  }

  getch();

}