// Write a program that will read n elements in one dimensional array.
// Find out the total number of negative,positive and zero elements in the array.
// Print all elements and total number of negative elements

#include<iostream.h>
#include<conio.h>

void main()
{

	clrscr();
	cout<<"Read n elements in one dimensional array.\nPrint the Array & total number of negative,positive and zero elemets.\n";

	int a[50],i,n,c1=0,c2=0,c3=0;

	cout<<"\nENTER NUMBER OF ELEMENTS : ";
	cin>>n;

	cout<<"\n\nENTER "<<n<<" ELEMENTS IN ARRAY : \n";

	for(i=0;i<n;i++)
	{
		cout<<"\tENTER ELEMENT ["<<i+1<<"] : ";
		cin>>a[i];

		if(a[i]>0)
	        c1++;  
        else if(a[i]<0)
            c2++;
        else
            c3++;
        
	}

	cout<<"\n\nONE DIMENSIONAL ARRAY : \n";


	for(i=0;i<n;i++)
	{
		cout<<"\n\tELEMENT ["<<i+1<<"] IS : "<<a[i];
	}


	cout<<"\n\n\tTOTAL NUMBER OF POSITIVE ELEMENTS : "<<c1;
	cout<<"\n\tTOTAL NUMBER OF NEGATIVE ELEMENTS : "<<c2;
	cout<<"\n\tTOTAL NUMBER OF ZERO ELEMENTS : "<<c3;

	getch();

}