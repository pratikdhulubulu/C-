#include<iostream>
using namespace std;
float sum( int r,float s);
int sum(int a,int b)
{
    int c,d;
    c =a+b;
    return (c);
}
float sum(int r,float s)
{
    float area;
    area=r*s;
    return (area);
}
int main()
{
    int a,b,r;
    float s;
    cout<<"enter values of a and b :"<<endl;
    cin>>a>>b;
    cout<<"enter values of r and s :"<<endl;
    cin>>r>>s;
    sum(a,b);
    sum(r,s);
    cout<<sum(a,b)<<" "<<sum(r,s);
    return 0;
}
