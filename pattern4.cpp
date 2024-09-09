#include<iostream>
using namespace std;

int main(){

      int row;
      cout<< "Enter rows: "<< endl;
      cin>> row;

      int i = 1;

      while(i<=row){

            int j = row;
            while(j>0){

                  cout<< j;
                  j--;
            }
            cout<< endl;
            i++;
      }
      
      return 0;
}