#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of elements in array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"the sum of entered numbers is "<<sum;
    return 0;
}