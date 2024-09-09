#include<iostream>
using namespace std;

int main(){

      int n, sumPrev = 0, sum = 1, fib=0;
      cout<< "Enter n: "<< endl;
      cin>> n;

      for(int i = 0; i < n; i++){
            
            cout<< fib<< " ";
            sumPrev = sum;
            sum = fib;
            fib = sumPrev + sum;


      } 
      return 0;
}