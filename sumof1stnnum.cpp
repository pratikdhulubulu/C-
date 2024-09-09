//sum of 1st n number
#include<bits/stdc++.h>
using namespace std;
int sum(int);
int main(){
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
	return 0;
}
int sum(int n)
{
	int ans;
	for(int i=1;i<=n;i++)
	{
		ans+=i;
	}
	return ans;
}
