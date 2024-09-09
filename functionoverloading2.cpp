#include <iostream>
using namespace std;
int dkte();
int dkte(int x, int y);
int dkte(int x, int y, int z)
{
    cout << "addition is:" << x + y + z << endl;
    return 0;
}
int dkte()
{
    cout << "DKTE" << endl;
    return 0;
}
int dkte(int x, int y)
{
    cout << "Multiplication is:" << x * y << endl;
    return 0;
}
int main()
{
    int a, b, c;

    cout << "Enter value for a: " << endl;
    cin >> a;
    cout << "Enter value for b: " << endl;
    cin >> b;
    cout << "Enter value for c: " << endl;
    cin >> c;
    dkte();
    dkte(a, b);
    dkte(a, b, c);
    return 0;
}