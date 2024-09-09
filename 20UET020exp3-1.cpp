//20UET020 exp3.1
//factorial using call by value
#include <iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    fact(n);
    return 0;
}