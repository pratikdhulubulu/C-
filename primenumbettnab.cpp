#include<iostream>
using namespace std ;
int main()
{
	int n,i,a,b;
	cout<<"enter the boundries"<<endl;
	cin>>a>>b;
	cout<<"prime numbers"<<endl;
	for(n=a;n<b;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				break;
			}
			
		}
		if(i==n)
		{
			cout<<n<<endl;
		}
	}

	return 0;
}
