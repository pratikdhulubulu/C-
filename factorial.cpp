//factorial
#include<iostream>
using namespace std;
void fact(int n);
int main(){
	int n;
	cin>>n;
	fact(n);
	return 0;
}
void fact(int n)
{
	int factorial=1;
	for(int i=n;i>0;i--)
	{
		factorial=i*factorial;
	}
	cout<<factorial;
}
