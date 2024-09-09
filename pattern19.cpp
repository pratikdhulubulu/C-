#include<iostream>
using namespace std;

int main(){

      int row;
      cout<< "Enter rows: "<< endl;
      cin>> row;

      int i = 1;

      while(i<=row){

            int j = 1;
            while(j<=row-i+1){

                  cout<< j;
                  j++;
            }

            int k = 1;
            while(k<=(2*i-2)){

                  cout<< "*";
                  k++;
            }
            
            int m = row-i+1;
            while(m>0){

                  cout<< m;
                  m--;
            }
            cout<< endl;
            i++;
      }
      
      return 0;
}