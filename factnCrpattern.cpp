#include<iostream>
using namespace std;
int fact(int n);
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
		}
		cout<<endl;
	}
	
}
int fact(int n)
{
	int factorial=1;
	for(int i=n;i>0;i--)
	{
		factorial=i*factorial;
	}
	return factorial;
}
