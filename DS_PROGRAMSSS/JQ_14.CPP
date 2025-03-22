// 14. Write a menu driven program to perform the following operations on Simple
// Queue using array.
// 1. INSERT
// 2. DELETE
// 3. DISPLAY
// 4. EXIT

#include<iostream.h>
#include<conio.h>

int q[6],n=5,r=0,f=0,i,j,ch=0,y,x;

void menu()
{
	cout<<"\n1->INSERT";
	cout<<"\n2->DELETE";
	cout<<"\n3->DISPLAY";
	cout<<"\n4->EXIT";

	cout<<"\n\nENTER CHOICE :";
	cin>>ch;
}

void display()
{
	for(j=f;j<=r;j++)
	cout<<q[j]<<" ";

	cout<<"\n";
}

void ins()
{
	if(r>=n)
		cout<<"\nQUEUE OVERFLOW\n";
	else
	{
		cout<<"\n\nQUEUE BEFORE INSERT : ";
		display();
		r=r+1;
		cout<<"\n\tENTER VALUE  : ";
		cin>>x;
		q[r]=x;
		if(f==0)
			f++;
		cout<<"\n\nQUEUE AFTER INSERT : ";
		display();
	}
}

void del()
{
	if(f==0)
	cout<<"\nQUEUE UNDERFLOW\n";

	else
	{
		y=q[f];
		if(f==r)
			f=r=0;
		else
			f=f+1;

		cout<<"\n\n\tDELETED ELEMENT : "<<y;
		cout<<"\n\n";
	}
}

void main()
{
	clrscr();

	do
	{
	menu();
		if(ch==1)
			ins();
		else if(ch==2)
			del();
		else if(ch==3)
		{
			cout<<"QUEUE : ";
			display();
		}
		else if(ch==4)
			cout<<"\n\n\t\tTHANK YOU :)";
		else
			cout<<"\n\nINVALID CHOICE\\n\n";

	}while(ch!=4);

	getch();
}