//pythagorian triplet
#include<bits/stdc++.h>
using namespace std;
bool triplet(int x,int y,int z);
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	if(triplet(x,y,z))
	{
		cout<<"pythogorian triplet";
	}
	else
	{
		cout<<"not pythogorian triplet";
	}
	return 0;
}
bool triplet(int x,int y,int z)
{
	int a= max(x,max(y,z));
	int b,c;
	
	if(a==x)
	{
		b=y;
		c=z;
	}
	else if(a==y)
	{
		b=x;
		c=z;
	}
	else
	{
		b=x;
		c=y;
	}
	
	if(a*a== (b*b+c*c))
	{
		return true;
	}
	else
	{
		return false;
	}
}
