#include<iostream>
using namespace std;

int main(){

      int row;
      cout<< "Enter rows: "<< endl;
      cin>> row;

      int i = 1;
      
      while(i<=row){

            int j = 1;
            int count = i;
            while(j<=i){

                  cout<< count; 
                  count--;
                  j++;
            }
            cout<< endl;
            i++;
      }
      
      return 0;
}