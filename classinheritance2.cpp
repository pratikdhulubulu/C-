#include <iostream>
using namespace std;
class d;
class c;
class b;
class a
{
protected:
    int x, y;

public:
    int getxy()
    {
        cout << "enter the value of x" << endl;
        cin >> x;
        cout << "enter the value of y" << endl;
        cin >> y;
        return 0;
    }
};
class b : virtual public a
{
protected:
    int p;

public:
    int add()
    {
        p = x + y;
        return 0;
    }
};
class c : virtual public a
{
protected:
    int q;

public:
    int sub()
    {
        q = x - y;
        return 0;
    }
};
class d : public b, public c
{
public:
    int result()
    {
        cout << "addition is: " << p << endl;
        cout << "substraction is: " << q;
        return 0;
    }
};
int main()
{

    d o;
    o.getxy();
    o.add();
    o.sub();
    o.result();
    return 0;
}