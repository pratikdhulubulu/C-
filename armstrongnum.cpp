//armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int original_n=n;
	while(n>0)
	{
		int lastdigit=n%10;
		sum+=pow(lastdigit,3);
		n=n/10;
	}
	if(sum==original_n)
	{
		cout<<"armstrong number"<<endl;
	}
	else
	{
		cout<<"not armstrong number"<<endl;
	}
	return 0;
}
