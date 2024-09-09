//20UET020 exp3.2
//swapping using call by reference
#include <iostream>
using namespace std;
int swap(int *x,int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
    cout<<*x<<" "<<*y;
    return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    return 0;
}