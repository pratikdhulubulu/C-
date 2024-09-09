#include<iostream>
using namespace std;

class Maths
{
      public:

      // result function is overloaded
      int result()
      {
            cout<<"No Result"<< endl;
            return 0;
      }

      int result(int a)
      {
            cout<<"square: "<< endl;
            return a*a;
      }

      int result(int a, int b)
      {
            cout<<"area: "<< endl;
            return a*b;
      }

};

int main()
{
      Maths p;
      
      cout<< p.result()<< endl;
      cout<< p.result(5)<< endl;
      cout<< p.result(2, 3)<< endl;

      return 0;
}