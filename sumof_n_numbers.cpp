#include<iostream>
using namespace std;

int main(){

      float n;
      cout<< "Enter n: "<< endl;
      cin>> n;

      float sum = 0;
      int i = 0;

      while(i<=n){

            sum += i;
            i++;
      }

      //OR
      // sum = (n/2)*(1+n);

      cout<< "Sum is: "<< sum<< endl;

      return 0;
}