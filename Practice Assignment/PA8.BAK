/*
Write a program that will read n elements in one dimentional array.
Find out total number of negative elements in array.
Print all elements and print total number of negative elements.
*/

#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[500];
	int countNegative = 0;
	int num;

	cout<<"print total number of negative elements"<<endl<<endl;
	clrscr();

	cout<<"Enter number of elements of ann array:"<<endl;
	cin>>num;

	cout<<"Enter array elements:"<<endl;
	for(int i = 0; i < num; i++)
	{
		cin>>arr[i];
	}

	cout<<endl;

	for(int j = 0; j < num; j++)
	{
		if(arr[j] % 2 == 0)
		{
			countNegative++;
		}
	}

	cout<<"Toatal number of positive elements: "<<countNegative<<endl;
	getch();
}