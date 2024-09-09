#include<iostream>
using namespace std;

int main(){

      int row;
      cout<< "Enter rows: "<< endl;
      cin>> row;

     int i = 0;
     char alph = 'A';
     while(i<row){
      
            int j = 0;
            while(j<row){
                  
                  cout<< alph;
                  alph++;
                  j++;
            }
            cout<< endl;
            i++;
     }
      
      return 0;
}