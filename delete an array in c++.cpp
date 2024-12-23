#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int i,n,pos;
	cout<<"enter the size of array:\n";
	cin>>n;
	cout<<"enter the number of elements:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the position:\n";
	cin>>pos;
	for(i=pos-1;i<n-1;i++)
	a[i]=a[i+1];
	for(i=0;i<n-1;i++)
	cout<<a[i]<<" ";
	return 0;
}