#include<iostream>
using namespace std;

int main(){

      int row;
      cout<< "Enter rows: "<< endl;
      cin>> row;

     int i = 0;

     while(i<row){
             
            char alph = 'A' + row-i-1;
            int j = 0;
            while(j<=i){

                  cout<< alph;
                  alph++;
                  j++;
            }
            cout<< endl;
            i++;
     }
      
      return 0;
}