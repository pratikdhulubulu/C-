#include<iostream>
using namespace std;

int main(){

      float n;
      cout<< "Enter n: "<< endl;
      cin>> n;

      float sum = 0;

      for(int i=2; i<=n; i+=2){

            sum += i;
      }

      //odd
      // for(int i=1; i<=n; i+=2){

      //       sum += i;
      // }

      cout<< "Sum is: "<< sum<< endl;

      return 0;
}