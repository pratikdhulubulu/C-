#include<iostream>
using namespace std;

int main(){

      int row;
      cout<< "Enter rows: "<< endl;
      cin>> row;

      int i = 0;
      int count = 1;

      while(i<row){

            int j = 0;
            while(j<row){

                  cout<< count;
                  count++;
                  j++;
            }
            cout<< endl;
            i++;
      }
      
      return 0;
}