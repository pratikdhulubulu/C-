#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int minn=INT_MAX;
	int maxn=INT_MIN;
	
	for(int i=0;i<n;i++)
	{

	minn=min(minn,array[i]);
	maxn=max(maxn,array[i]);
}
	cout<<minn<<" "<<maxn<<endl;
	return 0;
}
