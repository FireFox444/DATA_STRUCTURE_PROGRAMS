/*
write the program that will read n elements in onew dimentional array.
Find out the total number of even and odd elements in the array.
Print all the elements and total number of even an odd elements
*/

#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[5];
	int countEven = 0;
	int countOdd = 0;

	clrscr();

	cout<<"-----  Program to find even and odd elements and \ntotal number of even and odd elements  -----"<<endl<<endl;

	cout<<"Enter array elements:"<<endl;
	for(int i = 0; i < 5; i++)
	{
		cin>>arr[i];
	}

	cout<<endl;

	for(int j = 0; j < 5; j++)
	{
		cout<<"Array element: "<<arr[j]<<endl;
	}

	cout<<endl;

	for(int even = 0; even < 5; even++)
	{
	       if(arr[even] % 2 == 0)
		{
			cout<<"Even elements: "<<arr[even]<<endl;
			countEven++;
		}

	}

	cout<<endl;

	for(int odd = 0; odd < 5; odd++)
	{
	       if(arr[odd] % 2 != 0)
		{
			cout<<"Odd elements: "<<arr[odd]<<endl;
			countOdd++;
		}

	}

	cout<<endl;

	cout<<"Total number of even elements: "<<countEven<<endl;
	cout<<"Total number of odd elements: "<<countOdd<<endl;
	getch();
}