#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = 0;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime number" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime number" << endl;
    }

    return 0;
}