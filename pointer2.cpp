#include <iostream>
using namespace std;
int mult(int *p, int *q)
{
    int r;
    r = (*p) * (*q);
    return (r);
}
int main()
{
    int a, b;
    int *p = &a;
    int *q = &b;

    cout << "enter a and b:" << endl;
    cin >> a >> b;
    cout << a << " " << p << endl;
    cout << b << " " << q << endl;
    cout << *p << endl;
    cout << *t << endl;
    mult(&a, &b);
    cout << mult(&a, &b);
    return 0;
}