#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter num for table" << endl;
    cin >> a;
    int i = 1;
    int t = a;
    do
    {
        cout << t << endl;
        i++;
        t = a * i;

    } while (i <= 10);
    return 0;
}