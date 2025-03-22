/*
Write a program that will read n elements in one dimentional array.
Find out total number of positive elements in array.
Print all elements and print total number of positive elements.
*/

#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[5];
	int countPositive = 0;

	cout<<"print total number of positive elements"<<endl;
	clrscr();

	cout<<"Enter array elements:"<<endl;
	for(int i = 0; i < 5; i++)
	{
		cin>>arr[i];
	}

	cout<<endl;

	for(int j = 0; j < 5; j++)
	{
		if(arr[j] >= 0)
		{
			countPositive++;
		}
	}

	cout<<"Toatal number of positive elements: "<<countPositive<<endl;
	getch();
}