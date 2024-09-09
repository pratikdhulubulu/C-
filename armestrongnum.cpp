#include <iostream>
using namespace std;
int main()
{
    int a, sum = 0, n;
    cin >> a;
    n = a;

    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (sum == a)
    {
        cout << "an narmestrong num.";
    }
    else
    {
        cout << "not an aemwstrong number";
    }
    return 0;
}