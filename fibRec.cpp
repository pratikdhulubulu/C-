#include<iostream>
using namespace std;

int fib(int num){
      if(num==0)
      return 0;

      int f = fib(num) + fib(num-1);
      cout << f;

}

int main(){

      cout<< "Enter Number: "<< endl;
      int num;
      cin >> num;
      fib(num);
}