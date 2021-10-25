#include<iostream>
using namespace std;
int main()
{
	int i;
	int n;
	cout<<"Enter the Size of array : ";
	cin>>n;
	int a[n];
	cout<<"Enter the contents of the array : ";
	for(i=0 ; i<=n ; ++i)
	{
		cin>>a[i];
	}
	cout<<"Array :";
	for(i=0 ; i<=n ; ++i )
	{
		cout<<a[i];
	}
	cout<<"\nReverse Order of Array : ";
	for(i=n;i>=0;--i)
	{
		cout<<a[i];
	}
	return 0;
}
