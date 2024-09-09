#include<iostream>
using namespace std;

int main(){

      float tmpC, tmpF;

      cout<< "Enter temperature in celsius: "<< endl;
      cin>> tmpC;

      tmpF = (tmpC * 9/5) + 32;

      cout<< "Temperature in farenheit is: "<< tmpF<< " Degree F"<< endl;

      cout<< "Enter temperature in farenheit : "<< endl;
      cin>> tmpF;

      tmpC = (tmpF - 32) * 5/9;

      cout<< "Temperature in celsius is: "<< tmpC<< " Degree C"<< endl;
      
      return 0;
}