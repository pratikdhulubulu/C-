#include<iostream>
using namespace std;

int main(){

      int row;
      cout<< "Enter rows: "<< endl;
      cin>> row;

      int i = row;

      while(i>0){

            int j =1;
            while(j<=i){

                  cout<< "*";
                  j++;
            }
            cout<< endl;
            i--;
      }
      
      return 0;
}