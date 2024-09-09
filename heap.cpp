#include <iostream>
using namespace std;

int main()
{
      int *p=new int();
    
      cin>>*p;
      cout<<*p<<endl;
      delete(p);
      
      p=new int[5];
      

      return 0;
}