// Insert at front in singly linked list

#include<iostream.h>
#include<conio.h>
#include<alloc.h>

void createnode();
void display();

struct node
{
	int data;
	struct node *link;
}*head;


void createnode()
{
	struct node *fnode;
	char choice;
	do
	{
		fnode=(struct node *)malloc(sizeof(struct node));
		if(fnode==NULL)
		{
			cout<<"Something went wrong...\n";
			break;
		}
		else
		{
			cout<<"\nEnter the data for node : ";
			cin>>fnode->data;
			fnode->link=head->link;
			head->link=fnode;

			display();
			cout<<"\n\nWant to add more nodes?(Y/N) : ";
			cin>>choice;
			cout<<"----------------------------------\n";
		}
	}while(choice=='Y' || choice=='y');
}

void display()
{
	struct node *temp;
	if(head->link==NULL)
	{
		cout<<"\nLinked List is empty.\n";
		cout<<endl;
	}
	else
	{
		temp=head->link;
		cout<<"\nLinked List : ";
		while(temp!=NULL)
		{
			cout<<"\t"<<temp->data;
			temp=temp->link;
		}
	}
}

void main()
{
	clrscr();
	head=(struct node *)malloc(sizeof(struct node));
	head->link=NULL;

	cout<<"Program to create and display Singly Linked List.\n";
	cout<<"--------------------------------------------------\n";

	int a=0;
	while(a!=3)
	{
		cout<<"\n\n1->Create Node.\n2->Display The list.\n3->Exit.\n";
		cout<<"\tEnter Choice : ";
		cin>>a;
		cout<<"\n----------------\n";
		if(a==1)
		{
			cout<<"Create Node:\n";
			cout<<"------------\n";
			createnode();
		}
		else if(a==2)
		{
			cout<<"Display List:\n";
			cout<<"-------------\n";
			display();
		}
		else if(a==3)
		{
			cout<<"Thank you :)\n";
		}
		else
		{
			cout<<"Enter valid Choice...\n";
		}
	}
	getch();
}
