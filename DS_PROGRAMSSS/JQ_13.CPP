#include<iostream.h>
#include<conio.h>

int s[6],n=5,top=0,i,j,ch=0,x;

void menu()
{
	cout<<"\n1->PUSH";
	cout<<"\n2->POP";
	cout<<"\n3->PEEP";
	cout<<"\n4->CHANGE";
	cout<<"\n5->DISPLAY";
	cout<<"\n6->EXIT";

	cout<<"\n\nENTER CHOICE :";
	cin>>ch;
}

void display()
{
	for(j=1;j<=top;j++)
	cout<<s[j]<<" ";

	cout<<"\n";
}

void push()
{
	if(top>=n)
		cout<<"\nStack overflow\n";
	else
	{
		cout<<"\n\nSTACK BEFORE PUSH : ";
		display();
		top=top+1;
		cout<<"\n\tENTER VALUE  : ";
		cin>>x;
		s[top]=x;
		cout<<"\n\nSTACK AFTER PUSH : ";
		display();
	}
}

void pop()
{
	if(top==0)
	cout<<"\nSTACK UNDERFLOW\n";


	else
	{
		cout<<"\n\nSTACK BEFORE POP : ";
		display();
		top=top-1;
		cout<<"\n\tDELETED SUCCESSFULLY :"<<s[top+1];
		cout<<"\n\nSTACK AFTER POP : ";
		display();
	}
}

void peep()
{
	cout<<"ENTER POSITION : ";
	cin>>i;

	if((top-i+1)<=0)
	{
	     cout<<"\nSTACK UNDERFLOW\n";
	}
	else
	{
	     cout<<"\nELEMENT : "<<s[top-i+1];
	}
}

void change()
{
	cout<<"STACK : "; display();
	cout<<"\nENTER POSITION : ";
	cin>>i;

	if((top-i+1)<=0)
	{
	     cout<<"\nSTACK UNDERFLOW\n";
	}
	else
	{
	     cout<<"\nSTACK BEFORE CHANGE : \n";
	     display();

	     cout<<"\tENTER VALUE  : ";
	     cin>>x;
	     s[top-i+1]=x;

	     cout<<"\nSTACK AFTER CHANGE : \n";
	     display();
	}
}

void main()
{
	clrscr();

	do
	{
	menu();
		if(ch==1)
			push();
		else if(ch==2)
			pop();
		else if(ch==3)
			peep();
		else if(ch==4)
			change();
		else if(ch==5)
			display();
		else if(ch==6)
			cout<<"\n\n\t\tTHANK YOU :)";
		else
			cout<<"\n\nINVALID CHOICE\\n\n";

	}while(ch!=6);

	getch();
}