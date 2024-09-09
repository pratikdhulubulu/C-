#include <iostream>
using namespace std;
class palindrome
{
    private:
    int no;
    public:
    int palin()
    {
        int no, rem, rev = 0, t;
     cin >> no;
     t = no;
     while (no > 0)
     {
         rem = no % 10;
         rev = (rev * 10) + rem;
         no = no / 10;
     }
     if (rev == t)
     {
         cout << "palindrom no";
     }
     else
     {
         cout << "not palindrom no";
     }
     return 0;
  }
};
int main()
{
    palindrome obj;
    int palin();
    return 0;
}
