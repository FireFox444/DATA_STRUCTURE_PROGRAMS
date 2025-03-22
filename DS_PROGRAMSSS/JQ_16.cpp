// Delete node from beginning in singly linked list

#include<iostream.h>
#include<conio.h>
#include<alloc.h>

struct node
{
	int data;
	struct node *link;
}*head;

void createnode();
void display();
void delete_node();

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
void createnode()
{
	struct node *fnode;
	char choice;
	do
	{
		fnode=(struct node *)malloc(sizeof(struct node));
		if(fnode==NULL)
		{
			cout<<"Something went wrong boii!!!\n";
			break;
		}
		else
		{
			cout<<"\nEnter the data for node : ";
			cin>>fnode->data;
			fnode->link=head->link;
			head->link=fnode;

			display();
			cout<<"\n\nWant to add more nodes? (Y/N) : ";
			cin>>choice;
			cout<<"----------------------------------\n";
		}
	}while(choice=='Y' || choice=='y');
}

void delete_node()
{
	struct node *temp;
	char choice;
	do
	{
		if(head->link==NULL)
		{
			cout<<"Linked List is empty.\n";
			cout<<endl;
		}
		else
		{
			cout<<"\nLinked List before deletion : \n";
			display();

			temp=head->link;
			head->link=temp->link;
			cout<<endl;
			cout<<"\nLinked List after deletion : \n";
			display();

			cout<<"\n\nWant to delete more nodes?(Y/N) : ";
			cin>>choice;
			cout<<"--------------------------------------\n";
		}
	}while(choice=='Y' || choice=='y');
}
void main()
{
	clrscr();
	head=(struct node *)malloc(sizeof(struct node));
	head->link=NULL;
	cout<<"Delete node from beginning in singly linked list\n";
	cout<<"------------------------------------------------\n";
	int a=0;
	while(a!=4)
	{
		cout<<"\n1.Create a Node.\n2.Delete a Node.\n3.Display List.\n4.Exit.\n";
		cout<<"\tEnter a Choice : ";
		cin>>a;
		cout<<"----------------\n";
		if(a==1)
		{
			cout<<"Create Node:\n";
			cout<<"------------\n";
			createnode();
		}
		else if(a==2)
		{
			cout<<"Delete Node:\n";
			cout<<"------------\n";
			delete_node();
		}
		else if(a==3)
		{
			cout<<"Display List:\n";
			cout<<"-------------\n";
			display();
		}
		else if(a==4)
		{
			cout<<"Thank You :) \n";
		}
		else
		{
			cout<<"Enter valid choice.\n";
		}
	}
	getch();
}