//array linear search
#include<iostream>
using namespace std;
int arrsearch(int arr[],int n,int key);
int main()
{
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	
	cout<<arrsearch(arr,n,key)<<endl;
}
int arrsearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i;
	}
	return -1;
}
