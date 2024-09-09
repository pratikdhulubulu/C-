#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"enter the values for a,b,c,d: "<<endl;
    cin>>a>>b>>c>>d;
    ((((a>b)&&(a>c))&&(a>d))==1)?cout<<"a is largest":(((b>c)&&(b>d))==1)?cout<<"b is largest":((c>d)==1)?cout<<"c is largest":cout<<"d is largest";
    return 0;
}