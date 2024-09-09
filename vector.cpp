#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
      for(int i=0;i<v.size();i++)
      {
            cout<<v.at(i)<<endl;
      }
} 

int main()
{
      vector<int> vec1;
      // vec1.push_back(12);
      // vec1.push_back(11);
      // vec1.push_back(122);
      int size,element;
      cout<<"size: ";
      cin>>size;

      for(int i=0;i<size;i++)
      {
            cout<<"Enter 1st element: ";
            cin>>element;
            vec1.push_back(element);
      }

      // vec1.push_back(99);
      // vec1.push_back(95);
      vec1.push_back(93);
      // vec1.pop_back();

      // cout<<"Vector elements are:"<<endl;
      // display(vec1);
      vector<int> vec2(vec1);

      vector<int> :: iterator i=vec2.begin();
      vec2.insert(i+2,5,5);
      // cout<<"Vector elements of vec2 are:"<<endl;
      // display(vec2);
      cout<<"Vector elements of vec1 are:"<<endl;
      display(vec1);



      
      return 0;
}