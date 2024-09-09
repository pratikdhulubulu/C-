#include <iostream>
using namespace std;
class b;
class a
{
protected:
    int x;

public:
    void getx()
    {
        cout << "enter value for x " << endl;
        cin >> x;
    }
    friend int vb(a);
};
int vb(a o)
{
    z=x+y;
}
class b : public a
{
protected:
    int y;

public:
    void gety()
    {
        cout << "enter value for y" << endl;
        cin >> y;
    }
    void mult()
    {
        cout << "multiplication of x & y is:" << endl
             << x * y << endl;
    }
    void swap()
    {
        cout << "before swapping :" << x << " " << y << endl;
        int z;
        z = x;
        x = y;
        y = z;
        cout << "after swappng :" << x << " " << y << endl;
    }
};
int main()
{
    b o;
    o.getx();
    o.gety();
    o.mult();
    o.swap();

    return 0;
}