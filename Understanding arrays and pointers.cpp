#include<iostream>
using namespace std;

main()
{
	int arr[5]; // ARRAY DECLAATION
	int i;
	int *p; // POINTER DECLARATION
	p = arr; // ASSIGNMENT
	cout<<"Enter  5 elements you want to add :\n";
	for(i=0;i<5;i++)
	{
	cin>>arr[i]; // INPUT
	}
	cout<<"\nYou entered :\n";
	for(i=0;i<5;i++)
	{
		
		cout<<*p<<endl; // PRINTING 
//		cout<<arr[i]<<endl;
		p++; // TO MOVE THE POINTER TO NEXT POSITION
	}
	return 0;
}

