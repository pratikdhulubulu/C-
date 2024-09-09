//nCr
#include<iostream>
using namespace std;
int fact(int n);
int main(){
	int n,r;
	cin>>n>>r;
	int ans=fact(n)/(fact(r)*fact(n-r));
	cout<<ans;

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
