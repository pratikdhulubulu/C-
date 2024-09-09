#include<iostream>
using namespace std;
class syetc
{
    private:
    int x,y;
    public:
    int assign()
    {
        cin>>x>>y;
        return 0;   
    }
    friend int addition(syetc);
};
int addition (syetc p)
{
    int z;
    z=p.x+p.y;
    cout<<z;
    return 0;
}
int main()
{
    syetc d;
    d.assign();
    addition(d);
}