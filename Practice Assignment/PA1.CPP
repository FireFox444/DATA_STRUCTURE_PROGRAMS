/*
write a program that will read n elements in one dimentional array.
Print all the number as well as average of all number as an output
*/

#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[5];
	int sum = 0;
	int avrg = 0;

	clrscr();
	cout<<"----------  Program to find average of n elements  ----------"<<endl<<endl;
	cout<<"Enter array elements:"<<endl;
	for(int i = 0; i < 5; i++)
	{
		cin>>arr[i];
	}

	cout<<"Array elements are:"<<endl;
	for(int j = 0; j < 5; j++)
	{
		cout<<arr[j]<<endl;
		sum = sum + arr[j];
	}

	avrg = sum / 5;
	cout<<"----------------"<<endl;
	cout<<"Sum: "<<sum<<endl;
	cout<<"Average: "<<avrg;
	getch();
}