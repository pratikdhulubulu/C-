#include<iostream>
using namespace std;
int sum(int a, int b)
{cout<<"2 wala used"<<endl;
    return a+b;
}
int sum(int a, int b, int c)
{cout<<"3 wala used"<<endl;
    return a+b+c;
}
int main()
{
    cout<<"the sum of 3 and 6 is:"<<sum(3,6)<<endl;
    cout<<"the sum of 3,7 amd 6 is:"<<sum(3,7,8)<<endl;
    return 0;
}