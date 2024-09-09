#include<iostream>

using namespace std;

int sq(int a)
{
    return a*a;
}
int cb(int a)
{
    return a*a*a;
}
int main()
{
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;
    cout<<"square and cube of "<<num<<" is "<<sq(num)<<" and "<<cb(num)<<endl;

    return 0;
}