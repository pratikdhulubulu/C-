#include<iostream>
using namespace std;

int main(){

      int num;
      cout<< "Enter number: "<< endl;
      cin>> num;

      int i = 2;
      bool flag = 0;
      while(i<=num/2){

            if(num%i==0){

                  cout<< "Not prime"<< endl;
                  flag = 1;
                  break; 
            }
            i++;
      }
      
      if(flag==0){

            cout<< "Prime"<< endl;
      }
      
      return 0;
}