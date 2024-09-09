#include<iostream>
using namespace std;
int pointer(int* k)
{
    cout<<*k<<endl;
    cout<<k;
}
int main()
{
    // int a = 10;
    // int *ap = &a;
    // cout<<"value a="<<a<<endl;
    // cout<<"address ap="<<ap<<endl;
    // cout<<"accessing value by pointer *ap"<<*ap<<endl;
    
    // int **app = &ap;
    // cout<<"address of pointer ap is "<<app<<endl;
    // cout<<"*app "<<*app<<endl;
    // cout<<"**app "<<**app<<endl;

    int a[4] = {12,34,56,77};
    int *p = a;
    for(int i=0;i<4;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    
   // pointer(ap);
    return 0;
}