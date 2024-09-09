#include <iostream>
using namespace std;
class complex
{
public:
    int num1, num2;

public:
    void accept()
    {
        cout << "enter two complex numbers:" << endl;
        cin >> num1 >> num2;
    }
    complex operator+(complex obj)
    {
        complex c;
        c.num1 = num1 + obj.num1;
        c.num2 = num2 + obj.num2;
        return (c);
    }
    void display()
    {
        cout << num1 << "+" << num2 << "i" << endl;
    }
};
int main()
{
    complex c1, c2, sum;
    c1.accept();
    c2.accept();
    sum = c1 + c2;
    cout << "enter values:" << endl;
    c1.display();
    cout << endl;
    c2.display();
    cout << "sum is" << endl;
    sum.display();
    return 0;
}