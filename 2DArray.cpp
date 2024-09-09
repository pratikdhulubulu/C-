#include<iostream>
using namespace std;

int main()
{
      int row, col;
      cout<<"Enter number of rows and columns:"<<endl;
      cin>>row >>col;

      int arr[row][col];
      cout<<"Enter array elements: "<<endl;
      for(int i=0; i<row; i++)
      {
            for(int j=0; j<col; j++)
            {
                  cin>>arr[i][j];
            }
      }

      cout<<"Array elements are: "<<endl;
      for(int i=0; i<row; i++)
      {
            for(int j=0; j<col; j++)
            {
                  cout<<arr[i][j] <<"  ";
            }
            cout<<endl;
      }

      return 0;
}