#include<iostream>
using namespace std ;
int main()
{
	int money;
	cin>>money;
	for(int date=1;date<=30;date++)
	{
		if(date%2==0)
		{
			continue;
		}
	
		if(money==0)
		{
			break;
		}
		cout<<date<<"go out"<<endl;
		money=money-300;
		
	}
	return 0;
}
